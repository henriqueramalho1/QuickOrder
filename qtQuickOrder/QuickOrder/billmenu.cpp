#include "billmenu.h"
#include "./ui_billmenu.h"
#include <QPrinter>
#include <QPainter>
#include <QDir>
#include <QMessageBox>

BillMenu::BillMenu(QWidget* parent):
    Menu(parent), ui(new Ui::BillMenu())
{
    ui->setupUi(this);
    loadActiveTables();
}

BillMenu::~BillMenu()
{
    delete ui;
}

void BillMenu::loadActiveTables()
{
    QSqlQuery query;

    query.prepare("select * from table_tb where status = 1");

    if(query.exec())
    {
        while(query.next())
        {
            QString tableId = query.value(0).toString();
            ui->tableSelection->addItem(tableId);
        }
    }
}

void BillMenu::loadCostumers(QString tableId)
{
    ui->costumerSelection->clear();

    QSqlQuery query;

    query.prepare("select * from costumer_tb where costumer_table = "+tableId+"");

    std::cout << "Preparing to exec load costumers from table " << tableId.toStdString() << std::endl;

    if(query.exec())
    {
        while(query.next())
        {
            QString name = query.value(1).toString();
            ui->costumerSelection->addItem(name);
        }
    }
}

void BillMenu::on_pushButton_clicked()
{
    close();
}

void BillMenu::on_tableSelection_currentTextChanged(const QString &arg1)
{
    loadCostumers(ui->tableSelection->currentText());
}


void BillMenu::on_costumerSelection_itemClicked(QListWidgetItem *item)
{
    QString name = item->text();

    QSqlQuery query;

    query.prepare("select id from costumer_tb where name = '"+name+"'");

    if(query.exec())
    {
        while(query.next())
        {
           setCostumerId(query.value(0).toString());
        }
    }

    loadOrders(costumer_id);
}

void BillMenu::loadOrders(QString costumer_id)
{
    ui->orderWidget->clearSpans();
    ui->orderWidget->setRowCount(0);

    QSqlQuery query;
    QString productId;
    QString productName;

    query.prepare("select * from order_tb where costumer_id = "+costumer_id+"");

    if(query.exec())
    {

        while(query.next())
        {
            productId= query.value(2).toString();

            QSqlQuery query2;
            query2.prepare("select name from order_tb inner join product_tb on product_tb.id = order_tb.product_id where product_id = "+productId+"");
            if(query2.exec())
            {
                while(query2.next())
                {
                    productName = query2.value(0).toString();
                }
            }

            ui->orderWidget->insertRow(ui->orderWidget->rowCount());

            QTableWidgetItem* TId = new QTableWidgetItem();
            TId->setText(query.value(0).toString());
            ui->orderWidget->setItem(ui->orderWidget->rowCount()-1, 0, TId);

            QTableWidgetItem* TName = new QTableWidgetItem();
            TName->setText(productName);
            ui->orderWidget->setItem(ui->orderWidget->rowCount()-1, 1, TName);

            QTableWidgetItem* TQnt = new QTableWidgetItem();
            TQnt->setText(QString(query.value(4).toString()));
            ui->orderWidget->setItem(ui->orderWidget->rowCount()-1, 2, TQnt);

            QTableWidgetItem* TPrice = new QTableWidgetItem();
            TPrice->setText("R$"+QString(query.value(5).toString()));
            ui->orderWidget->setItem(ui->orderWidget->rowCount()-1, 3, TPrice);

            QTableWidgetItem* TObs = new QTableWidgetItem();
            TObs->setText(QString(query.value(3).toString()));
            ui->orderWidget->setItem(ui->orderWidget->rowCount()-1, 4, TObs);
        }
    }
}

void BillMenu::on_billButton_clicked()
{

    QString costumerName;

    if(ui->costumerSelection->selectedItems().begin() != nullptr)
    {
        costumerName = (*(ui->costumerSelection->selectedItems().begin()))->text();
    }

    QString fileName = QDir::currentPath()+"/conta_"+costumerName+".pdf";
    QPrinter printer;
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);

    std::cout << fileName.toStdString() << std::endl;

    QPainter painter;

    if(!painter.begin(&printer))
    {
        QMessageBox::warning(this, "", "Erro ao gerar o arquivo pdf.");
        return;
    }
    else
    {
        int salto = 20;
        int linha = 200;

        painter.drawText(120, 150, "OrderID");
        painter.drawText(240, 150, "Prato");
        painter.drawText(360, 150, "Quantidade");
        painter.drawText(480, 150, "Preço");
        painter.drawText(600, 150, "Observação");

        double total = 0;

        for(int i = 0; i < ui->orderWidget->rowCount(); i++)
        {
            painter.drawText(120, linha, ui->orderWidget->item(i, 0)->text());
            painter.drawText(240, linha, ui->orderWidget->item(i, 1)->text());
            painter.drawText(360, linha, ui->orderWidget->item(i, 2)->text());
            painter.drawText(480, linha, "R$"+ui->orderWidget->item(i, 3)->text());
            painter.drawText(600, linha, ui->orderWidget->item(i, 4)->text());
            linha += salto;
            total += ui->orderWidget->item(i, 3)->text().toDouble();
        }

        painter.drawText(400, linha + 50, "TOTAL");
        painter.drawText(480, linha + 50, "R$"+QString::fromStdString(std::to_string(total)));

    }

    painter.end();

    QMessageBox::information(this, "", "Conta gerada com sucesso.");


    QSqlQuery deleteQuery;

    deleteQuery.prepare("delete from order_tb where costumer_id = "+costumer_id);
    deleteQuery.exec();


    deleteQuery.prepare("delete from costumer_tb where id = "+costumer_id);
    deleteQuery.exec();

    loadCostumers(ui->tableSelection->currentText());
    loadOrders(costumer_id);

}


void BillMenu::on_removeButton_clicked()
{
    if(ui->orderWidget->selectedItems().begin() == nullptr)
    {
        QMessageBox::warning(this, "", "Selecione o pedido que deseja remover");
        return;
    }

    int orderId = (*ui->orderWidget->selectedItems().begin())->text().toInt();
    QSqlQuery deleteQuery;
    deleteQuery.prepare("delete from order_tb where id = "+QString::number(orderId)+"");
    deleteQuery.exec();

    loadOrders(costumer_id);
}

void BillMenu::setCostumerId(QString newId)
{
    costumer_id = newId;
}


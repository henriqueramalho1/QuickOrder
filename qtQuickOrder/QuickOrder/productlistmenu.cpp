#include "productlistmenu.h"
#include "./ui_productlistmenu.h"
#include "QMessageBox"

ProductListMenu::ProductListMenu(QWidget* parent, int i):
    Menu(parent), ui(new Ui::ProductListMenu), costumerId(i)
{
    ui->setupUi(this);
    ui->orderWidget->setSortingEnabled(false);
    loadProducts();
    loadOrders();
}

ProductListMenu::~ProductListMenu()
{
    ui->productWidget->clear();
    ui->orderWidget->clear();
    delete ui;
}

void ProductListMenu::on_backPushButton_clicked()
{
    close();
}

void ProductListMenu::loadProducts()
{
    QSqlQuery query;

    query.prepare("select * from product_tb");

    if(query.exec())
    {
        while(query.next())
        {
            QTreeWidgetItem* item = new QTreeWidgetItem();
            item->setText(0, query.value(1).toString());
            ui->productWidget->addTopLevelItem(item);
            QTreeWidgetItem* ing1 = new QTreeWidgetItem();
            ing1->setText(0, query.value(2).toString());
            item->addChild(ing1);

            if(query.value(3).toString() != "")
            {
                QTreeWidgetItem* ing2 = new QTreeWidgetItem();
                ing2->setText(0, query.value(3).toString());
                item->addChild(ing2);
            }

            if(query.value(4).toString() != "")
            {
                QTreeWidgetItem* ing3 = new QTreeWidgetItem();
                ing3->setText(0, query.value(4).toString());
                item->addChild(ing3);
            }

            if(query.value(5).toString() != "")
            {
                QTreeWidgetItem* ing4 = new QTreeWidgetItem();
                ing4->setText(0, query.value(5).toString());
                item->addChild(ing4);
            }

            if(query.value(6).toString() != "")
            {
                QTreeWidgetItem* ing5 = new QTreeWidgetItem();
                ing5->setText(0, query.value(6).toString());
                item->addChild(ing5);
            }
        }
    }
}

void ProductListMenu::loadOrders()
{
    ui->orderWidget->clearSpans();
    ui->orderWidget->setRowCount(0);

    QSqlQuery query;
    QString costumer_id;
    costumer_id = QString::fromStdString(std::to_string(costumerId));
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
            TPrice->setText(QString("R$"+query.value(5).toString()));
            ui->orderWidget->setItem(ui->orderWidget->rowCount()-1, 3, TPrice);

            QTableWidgetItem* TObs = new QTableWidgetItem();
            TObs->setText(QString(query.value(3).toString()));
            ui->orderWidget->setItem(ui->orderWidget->rowCount()-1, 4, TObs);
        }
    }
}

void ProductListMenu::on_registerButton_clicked()
{
    QList<QTreeWidgetItem*> itemList = ui->productWidget->selectedItems();
    QSqlQuery query;
    QString productId;
    QString productName;
    QString costumer_id;
    double price;

    if(ui->productWidget->selectedItems().begin() == nullptr)
    {
        QMessageBox::warning(this, "", "Selecione um prato para registrar o pedido.");
        return;
    }

    costumer_id = QString::fromStdString(std::to_string(costumerId));

    for(auto it = itemList.begin(); it != itemList.end(); it++)
    {
        productName = (*it)->text(0);
    }

    std::cout << productName.toStdString() << std::endl;

    query.prepare("insert into order_tb (costumer_id, product_id, obs, quantity, price) values(?, ?, ?, ?, ?)");
    query.addBindValue(costumer_id);

    QSqlQuery productQuery;
    productQuery.prepare("select * from product_tb where name = '"+productName+"'");

    if(productQuery.exec())
    {
        std::cout << "selecting" << std::endl;
        while(productQuery.next())
        {
            productId = productQuery.value(0).toString();
            price = productQuery.value(7).toDouble();
        }
    }

    query.addBindValue(productId);
    query.addBindValue(ui->noteInput->toPlainText());
    query.addBindValue(QString("1"));
    query.addBindValue(price);
    query.exec();

    loadOrders();
}


void ProductListMenu::on_pushButton_clicked()
{
   if(ui->orderWidget->selectedItems().begin()){
       int orderId = (*ui->orderWidget->selectedItems().begin())->text().toInt();
       QSqlQuery deleteQuery;
       deleteQuery.prepare("delete from order_tb where id = "+QString::number(orderId)+"");
       deleteQuery.exec();

       loadOrders();
   }
}


void ProductListMenu::on_addPushButton_clicked()
{
    if(ui->orderWidget->selectedItems().begin()){
        int orderId = (*ui->orderWidget->selectedItems().begin())->text().toInt();
        QSqlQuery updateQuery;
        updateQuery.prepare("update order_tb set obs = '"+ui->noteInput->toPlainText()+"' where id = "+QString::number(orderId)+"");

        updateQuery.exec();

        loadOrders();
    }
    else
    {
        QMessageBox::warning(this, "", "Selecione um pedido para adicionar a observação");
    }

    ui->noteInput->clear();

}


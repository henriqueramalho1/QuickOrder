#include "orderstatusmenu.h"
#include "./ui_orderstatusmenu.h"

#include <iostream>

OrderStatusMenu::OrderStatusMenu(QWidget *parent): Menu(parent), ui(new Ui::OrderStatusMenu){
    ui->setupUi(this);

    ui->orderWidget->setSortingEnabled(false);
    loadOrders();

}

OrderStatusMenu::~OrderStatusMenu(){
    delete ui;
}


void OrderStatusMenu::on_backButton_clicked()
{
    close();
}


void OrderStatusMenu::on_updateStatusButton_clicked()
{
    if(ui->orderWidget->selectedItems().begin()){
        int orderId = (*ui->orderWidget->selectedItems().begin())->text().toInt();
        QSqlQuery updateQuery;
        updateQuery.prepare("update order_tb set status = 1 where id = "+QString::number(orderId)+"");

        updateQuery.exec();

        loadOrders();
    }
}

void OrderStatusMenu::loadOrders()
{
    //ui->orderWidget->clear();
    ui->orderWidget->clearSpans();
    ui->orderWidget->setRowCount(0);

    QSqlQuery query;
    QString productId;
    QString productName;

    query.prepare("select * from order_tb");

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
            TPrice->setText(QString(query.value(5).toString()));
            ui->orderWidget->setItem(ui->orderWidget->rowCount()-1, 3, TPrice);

            QTableWidgetItem* TObs = new QTableWidgetItem();
            TObs->setText(QString(query.value(3).toString()));
            ui->orderWidget->setItem(ui->orderWidget->rowCount()-1, 4, TObs);

            QTableWidgetItem* TStatus = new QTableWidgetItem();
            TStatus->setText(QString(query.value(6).toBool() ? "Em preparacao":"Em espera"));
            ui->orderWidget->setItem(ui->orderWidget->rowCount()-1, 5, TStatus);
        }
    }
}


void OrderStatusMenu::on_cancelOrderButton_clicked()
{
    if(ui->orderWidget->selectedItems().begin()){
        int orderId = (*ui->orderWidget->selectedItems().begin())->text().toInt();
        QSqlQuery deleteQuery;
        deleteQuery.prepare("delete from order_tb where id = "+QString::number(orderId)+"");
        deleteQuery.exec();

        loadOrders();
    }
}


#include "updateinventorymenu.h"
#include "./ui_updateinventorymenu.h"
#include "product.h"
#include <QMessageBox>

#include <iostream>

UpdateInventoryMenu::UpdateInventoryMenu(QWidget *parent): Menu(parent), ui(new Ui::UpdateInventoryMenu){
    ui->setupUi(this);
    loadInventory();
}

UpdateInventoryMenu::~UpdateInventoryMenu(){
    delete ui;
}

void UpdateInventoryMenu::on_backButton_clicked()
{
    close();
}

void UpdateInventoryMenu::loadInventory()
{
    ui->inventoryListWidget->clear();

    QSqlQuery query;

    query.prepare("select * from inventory_tb");


    if(query.exec())
    {
        while(query.next())
        {
            QString item = query.value(1).toString();
            item += ": ";
            item += query.value(2).toString();
            ui->inventoryListWidget->addItem(item);
        }
    }
}
void UpdateInventoryMenu::on_updateButton_clicked()
{
    QSqlQuery query;

    query.prepare("select * from inventory_tb where name = '" + ui->nameInput->text() + "'");
    query.exec();

    if(query.next()){
        double amount = query.value(2).toDouble();
        amount += ui->quantityDoubleSpinBox->value();
        QString amountText = QString::number(amount);
        std::cout << amountText.toStdString() << std::endl;
        query.prepare("update inventory_tb set quantity = "+amountText+" where name = '"+query.value(1).toString()+ "'");
        query.exec();
    }
    else{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmar", "Deseja adicionar novo insumo?", QMessageBox::Yes|QMessageBox::No);

        if(reply == QMessageBox::Yes){
            query.prepare("insert into inventory_tb (name, quantity) values (?, ?)");
            query.addBindValue(ui->nameInput->text());
            query.addBindValue(ui->quantityDoubleSpinBox->value());
            query.exec();
        }
    }

    loadInventory();
}


void UpdateInventoryMenu::on_inventoryListWidget_itemClicked(QListWidgetItem *item)
{
    ui->nameInput->setText(item->text().mid(0, item->text().indexOf(":")));
}


#include "costumerregistermenu.h"
#include "./ui_costumerregistermenu.h"
#include "costumer.h"
#include <QMessageBox>

#include <iostream>

CostumerRegisterMenu::CostumerRegisterMenu(QWidget *parent): Menu(parent), ui(new Ui::CostumerRegisterMenu)
{
    ui->setupUi(this);
}

CostumerRegisterMenu::~CostumerRegisterMenu(){
    delete ui;
}

void CostumerRegisterMenu::loadCostumers(QString tableId)
{
    ui->costumerWidget->clear();

    QSqlQuery query;

    query.prepare("select * from costumer_tb where costumer_table = "+tableId+"");

    if(query.exec())
    {
        while(query.next())
        {
            QString name = query.value(1).toString();
            ui->costumerWidget->addItem(name);
        }
    }

}

void CostumerRegisterMenu::on_backButton_clicked()
{
    close();
}


void CostumerRegisterMenu::on_registerButton_clicked()
{
    QString name = ui->nameInput->text();
    int tableId = ui->tableSelect->value();

    addToDatabase(name, tableId);

    ui->nameInput->clear();
    loadCostumers(QString::fromStdString(std::to_string(ui->tableSelect->value())));
}

void CostumerRegisterMenu::addToDatabase(QString name, int tableId)
{
    if(!isTableRegistered(tableId))
    {
        return;
    }

    QSqlQuery query;

    query.prepare("insert into costumer_tb (name, costumer_table) values (?, ?)");
    query.addBindValue(name);
    query.addBindValue(tableId);

    if(query.exec())
    {
        QMessageBox::information(this, "","Consumidor cadastrado com sucesso");
    }
}

bool CostumerRegisterMenu::isTableRegistered(int tableId)
{
    QSqlQuery query;

    query.prepare("select * from table_tb");

    bool tableIdRegistered = false;

    if(query.exec())
    {
        while(query.next())
        {
            if(query.value(0) == tableId && query.value(1) == 1)
            {
                tableIdRegistered = true;
                return tableIdRegistered;
            }
        }
    }

    if(!tableIdRegistered)
    {
        QMessageBox::warning(this, "", "A mesa selecionada não está cadastrada ou ativa!");
    }

    return false;
}

void CostumerRegisterMenu::on_tableSelect_textChanged(const QString &arg1)
{
    int i = ui->tableSelect->value();
    QString tableId;
    tableId = QString::fromStdString(std::to_string(i));
    loadCostumers(tableId);
    updateTableStatus(tableId);


}

 void CostumerRegisterMenu::updateTableStatus(QString tableId)
 {
     QSqlQuery query;
     int status;
     query.prepare("select status from table_tb where id = "+tableId+"");
     if(query.exec())
     {
         while(query.next())
         {
            status = query.value(0).toInt();
         }
     }

     if(status)
     {
        ui->modStatus->setText(QString("Ativa"));
     }
     else
     {
        ui->modStatus->setText(QString("Inativa"));
     }
 }


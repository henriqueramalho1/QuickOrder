#include "costumerregistermenu.h"
#include "./ui_costumerregistermenu.h"
#include "costumer.h"
#include <QMessageBox>

#include <iostream>

CostumerRegisterMenu::CostumerRegisterMenu(QWidget *parent): Menu(parent), ui(new Ui::CostumerRegisterMenu){
    ui->setupUi(this);
}

CostumerRegisterMenu::~CostumerRegisterMenu(){
    delete ui;
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

    ui->tableSelect->clear();
    ui->nameInput->clear();
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
                break;
            }
        }
    }

    if(!tableIdRegistered)
    {
        QMessageBox::warning(this, "", "A mesa selecionada não está cadastrada ou ativa!");
        return false;
    }
}

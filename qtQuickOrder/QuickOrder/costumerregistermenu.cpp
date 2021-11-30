#include "costumerregistermenu.h"
#include "./ui_costumerregistermenu.h"
#include "costumer.h"

#include <iostream>

CostumerRegisterMenu::CostumerRegisterMenu(QWidget *parent): Menu(parent, nullptr), ui(new Ui::CostumerRegisterMenu){
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
    Costumer* newCostumer = new Costumer(ui->nameInput->text().toStdString());
    int costumerTableID = ui->tableSelect->value();

    std::cout << newCostumer->getName() << costumerTableID << std::endl;

    //salvar no banco

    delete newCostumer;

    ui->nameInput->clear();
}


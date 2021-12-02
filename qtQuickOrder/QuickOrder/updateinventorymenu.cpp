#include "updateinventorymenu.h"
#include "./ui_updateinventorymenu.h"
#include "product.h"

#include <iostream>

UpdateInventoryMenu::UpdateInventoryMenu(QWidget *parent): Menu(parent), ui(new Ui::UpdateInventoryMenu){
    ui->setupUi(this);
}

UpdateInventoryMenu::~UpdateInventoryMenu(){
    delete ui;
}

void UpdateInventoryMenu::on_backButton_clicked()
{
    close();
}


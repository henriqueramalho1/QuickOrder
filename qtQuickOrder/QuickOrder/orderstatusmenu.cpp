#include "orderstatusmenu.h"
#include "./ui_orderstatusmenu.h"

#include <iostream>

OrderStatusMenu::OrderStatusMenu(QWidget *parent): Menu(parent), ui(new Ui::OrderStatusMenu){
    ui->setupUi(this);

    //carregar pedidos do banco
    for(auto i = orders.begin(); i != orders.end(); i++){
        QString textQ = QString::fromStdString((*i)->getName());
        ui->orderListWidget->addItem(textQ);
    }
}

OrderStatusMenu::~OrderStatusMenu(){
    delete ui;
}


void OrderStatusMenu::on_backButton_clicked()
{
    close();
}


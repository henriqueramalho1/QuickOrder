#include "mainmenu.h"
#include "./ui_mainmenu.h"
#include "productregistermenu.h"
#include <QEventLoop>

MainMenu::MainMenu(QWidget *parent): Menu(parent), ui(new Ui::MainMenu){
    ui->setupUi(this);

    productRegisterMenu = new ProductRegisterMenu(nullptr, this);

    connect(ui->registerProductButton, SIGNAL(clicked()), this, SLOT(hide()));
    connect(ui->registerProductButton, SIGNAL(clicked()), productRegisterMenu, SLOT(show()));
}

MainMenu::~MainMenu(){
    delete productRegisterMenu;
    delete ui;
}


void MainMenu::on_registerProductButton_clicked(){


   //QEventLoop loop;
   //connect(productRegisterMenu, SIGNAL(destroyed()), &loop, SLOT(quit()));
   //loop.exec();




}


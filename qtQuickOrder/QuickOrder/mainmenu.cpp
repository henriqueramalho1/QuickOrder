#include "mainmenu.h"
#include "./ui_mainmenu.h"
#include "productregistermenu.h"
#include <QEventLoop>

MainMenu::MainMenu(QWidget *parent): Menu(parent), ui(new Ui::MainMenu){
    ui->setupUi(this);
    setAttribute(Qt::WA_QuitOnClose, true);
    setAttribute(Qt::WA_DeleteOnClose, false);
}

MainMenu::~MainMenu(){
    delete ui;
}


void MainMenu::on_registerProductButton_clicked(){
    hide();

    productRegisterMenu = new ProductRegisterMenu(nullptr, this);
    productRegisterMenu->show();

    QEventLoop loop;
    connect(productRegisterMenu, SIGNAL(destroyed()), &loop, SLOT(quit()));
    loop.exec();

    show();
    //
    printf("loop ended\n");


}


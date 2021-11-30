#include "mainmenu.h"
#include "./ui_mainmenu.h"
#include "productregistermenu.h"
#include "costumerregistermenu.h"
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


void MainMenu::on_addCostumerButton_clicked()
{
    hide();

    Menu* costumerRegisterMenu = new CostumerRegisterMenu(nullptr);
    costumerRegisterMenu->show();

    QEventLoop loop;
    connect(costumerRegisterMenu, SIGNAL(destroyed()), &loop, SLOT(quit()));
    loop.exec();

    show();
}


void MainMenu::on_backButton_clicked()
{
    close();
}


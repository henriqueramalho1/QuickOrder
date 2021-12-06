#include "mainmenu.h"
#include "./ui_mainmenu.h"
#include "productregistermenu.h"
#include "tablelistmenu.h"
#include "costumerregistermenu.h"
#include "orderstatusmenu.h"
#include "updateinventorymenu.h"
#include "orderregistermenu.h"
#include "billmenu.h"
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

    productRegisterMenu = new ProductRegisterMenu(nullptr);
    productRegisterMenu->show();

    QEventLoop loop;
    connect(productRegisterMenu, SIGNAL(destroyed()), &loop, SLOT(quit()));
    loop.exec();

    show();
    //
    printf("loop ended\n");


}


void MainMenu::on_updateTableStatusButton_clicked()
{
    hide();

    TableListMenu* tableListMenu = new TableListMenu();
    tableListMenu->show();

    QEventLoop loop;
    connect(tableListMenu, SIGNAL(destroyed()), &loop, SLOT(quit()));
    loop.exec();

    show();
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


void MainMenu::on_orderStatusButton_clicked()
{
    hide();

    Menu* orderStatusMenu = new OrderStatusMenu(nullptr);
    orderStatusMenu->show();

    QEventLoop loop;
    connect(orderStatusMenu, SIGNAL(destroyed()), &loop, SLOT(quit()));
    loop.exec();

    show();

}


void MainMenu::on_updateInventoryButton_clicked()
{
    hide();

    Menu* updateInventoryMenu = new UpdateInventoryMenu(nullptr);
    updateInventoryMenu->show();

    QEventLoop loop;
    connect(updateInventoryMenu, SIGNAL(destroyed()), &loop, SLOT(quit()));
    loop.exec();

    show();
}


void MainMenu::on_orderButton_clicked()
{
    hide();

    OrderRegisterMenu* orderRegisterMenu = new OrderRegisterMenu(nullptr);
    orderRegisterMenu->show();

    QEventLoop loop;
    connect(orderRegisterMenu, SIGNAL(destroyed()), &loop, SLOT(quit()));
    loop.exec();

    show();
}


void MainMenu::on_closeCostumerButton_clicked()
{
    hide();

    BillMenu* billMenu = new BillMenu();
    billMenu->show();

    QEventLoop loop;
    connect(billMenu, SIGNAL(destroyed()), &loop, SLOT(quit()));
    loop.exec();

    show();
}


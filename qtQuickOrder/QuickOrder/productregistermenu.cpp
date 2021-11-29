#include "productregistermenu.h"
#include "./ui_productregistermenu.h"

ProductRegisterMenu::ProductRegisterMenu(QWidget *parent, QWidget *caller): Menu(parent, caller), ui(new Ui::ProductRegisterMenu){
    ui->setupUi(this);

    connect(this, SIGNAL(destroy()), caller, SLOT(show()));
}

ProductRegisterMenu::~ProductRegisterMenu(){
    delete ui;
}

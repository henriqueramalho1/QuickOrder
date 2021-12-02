#include "productlistmenu.h"
#include "./ui_productlistmenu.h"

ProductListMenu::ProductListMenu(QWidget* parent):
    Menu(parent), ui(new Ui::ProductListMenu)
{
    ui->setupUi(this);
}

ProductListMenu::~ProductListMenu()
{
    delete ui;
}

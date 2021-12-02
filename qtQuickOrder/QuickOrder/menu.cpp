#include "menu.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent)
{
    setAttribute(Qt::WA_QuitOnClose, false);
    setAttribute(Qt::WA_DeleteOnClose, true);

}

Menu::~Menu(){

}

Database Menu::database;

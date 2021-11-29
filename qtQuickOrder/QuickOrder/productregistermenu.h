#ifndef PRODUCTREGISTERMENU_H
#define PRODUCTREGISTERMENU_H

#include "menu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ProductRegisterMenu; }
QT_END_NAMESPACE

class ProductRegisterMenu : public Menu{

    Q_OBJECT

public:
    ProductRegisterMenu(QWidget *parent = nullptr, QWidget* caller = nullptr);
    virtual ~ProductRegisterMenu();

private:
    Ui::ProductRegisterMenu *ui;

};

#endif // PRODUCTREGISTERMENU_H

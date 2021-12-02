#ifndef PRODUCTLISTMENU_H
#define PRODUCTLISTMENU_H

#include "menu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ProductListMenu; }
QT_END_NAMESPACE

class ProductListMenu : public Menu
{
    Q_OBJECT
public:
    ProductListMenu(QWidget* parent = nullptr);
    virtual ~ProductListMenu();

private:
       Ui::ProductListMenu *ui;
};

#endif // PRODUCTLISTMENU_H

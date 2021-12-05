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
    ProductListMenu(QWidget* parent = nullptr, int i = -1);
    virtual ~ProductListMenu();
    void loadProducts();
    void loadOrders();

private slots:
    void on_backPushButton_clicked();

    void on_registerButton_clicked();

    void on_pushButton_clicked();

private:
       Ui::ProductListMenu *ui;
       int costumerId;
};

#endif // PRODUCTLISTMENU_H

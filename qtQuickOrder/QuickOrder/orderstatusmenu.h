#ifndef ORDERSTATUSMENU_H
#define ORDERSTATUSMENU_H

#include "menu.h"
#include "product.h"

QT_BEGIN_NAMESPACE
namespace Ui { class OrderStatusMenu; }
QT_END_NAMESPACE

class OrderStatusMenu : public Menu{

    Q_OBJECT

public:
    OrderStatusMenu(QWidget *parent = nullptr);
    virtual ~OrderStatusMenu();

private slots:
    void on_backButton_clicked();

private:
    Ui::OrderStatusMenu *ui;
    std::vector<Product*> orders;

};

#endif // ORDERSTATUSMENU_H

#ifndef ORDERREGISTERMENU_H
#define ORDERREGISTERMENU_H

#include "menu.h"
#include <QListWidget>
#include "productlistmenu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class OrderRegisterMenu; }
QT_END_NAMESPACE

class OrderRegisterMenu : public Menu
{
    Q_OBJECT

public:
    OrderRegisterMenu(QWidget* parent);
    virtual ~OrderRegisterMenu();
    void loadActiveTables();
    void loadCostumers(QString tableId);

private slots:
    void on_pushButton_clicked();

    void on_tableSelection_currentTextChanged(const QString &arg1);

    void on_costumerSelection_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::OrderRegisterMenu *ui;
};

#endif // ORDERREGISTERMENU_H

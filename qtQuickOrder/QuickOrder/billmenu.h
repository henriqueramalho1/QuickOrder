#ifndef BILLMENU_H
#define BILLMENU_H

#include "menu.h"
#include "QListWidget"

QT_BEGIN_NAMESPACE
namespace Ui { class BillMenu; }
QT_END_NAMESPACE

class BillMenu : public Menu
{
    Q_OBJECT
public:
    BillMenu(QWidget* parent = nullptr);
    virtual ~BillMenu();
    void loadActiveTables();
    void loadCostumers(QString tableId);
    void loadOrders(QString costumer_id);
    void setCostumerId(QString newId);

private slots:
    void on_pushButton_clicked();

    void on_tableSelection_currentTextChanged(const QString &arg1);

    void on_costumerSelection_itemClicked(QListWidgetItem *item);

    void on_billButton_clicked();

    void on_removeButton_clicked();

private:
    Ui::BillMenu* ui;
    QString costumer_id;

};

#endif // BILLMENU_H

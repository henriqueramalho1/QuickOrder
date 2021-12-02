#ifndef UPDATEINVENTORYMENU_H
#define UPDATEINVENTORYMENU_H


#include "menu.h"
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class UpdateInventoryMenu; }
QT_END_NAMESPACE

class UpdateInventoryMenu : public Menu{

    Q_OBJECT

public:
    UpdateInventoryMenu(QWidget *parent = nullptr);
    virtual ~UpdateInventoryMenu();
    void loadInventory();

private slots:
    void on_backButton_clicked();

    void on_updateButton_clicked();

    void on_inventoryListWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::UpdateInventoryMenu *ui;

};

#endif // UPDATEINVENTORYMENU_H

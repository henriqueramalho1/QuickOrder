#ifndef UPDATEINVENTORYMENU_H
#define UPDATEINVENTORYMENU_H


#include "menu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class UpdateInventoryMenu; }
QT_END_NAMESPACE

class UpdateInventoryMenu : public Menu{

    Q_OBJECT

public:
    UpdateInventoryMenu(QWidget *parent = nullptr);
    virtual ~UpdateInventoryMenu();

private slots:
    void on_backButton_clicked();

private:
    Ui::UpdateInventoryMenu *ui;

};

#endif // UPDATEINVENTORYMENU_H

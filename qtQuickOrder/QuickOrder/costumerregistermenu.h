#ifndef COSTUMERREGISTERMENU_H
#define COSTUMERREGISTERMENU_H


#include "menu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CostumerRegisterMenu; }
QT_END_NAMESPACE

class CostumerRegisterMenu : public Menu{

    Q_OBJECT

public:
    CostumerRegisterMenu(QWidget *parent = nullptr);
    virtual ~CostumerRegisterMenu();

private slots:

    void on_backButton_clicked();

    void on_registerButton_clicked();

private:
    Ui::CostumerRegisterMenu *ui;

};

#endif // COSTUMERREGISTERMENU_H

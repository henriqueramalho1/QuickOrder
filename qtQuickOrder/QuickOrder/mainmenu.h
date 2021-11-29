#ifndef MAINMENU_H
#define MAINMENU_H

#include "menu.h"
#include "productregistermenu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainMenu; }
QT_END_NAMESPACE

class MainMenu : public Menu{

    Q_OBJECT

private:
    ProductRegisterMenu* productRegisterMenu;

public:
    MainMenu(QWidget *parent = nullptr);
    virtual ~MainMenu();



private slots:
    void on_registerProductButton_clicked();

private:
    Ui::MainMenu *ui;

};

#endif // MAINMENU_H

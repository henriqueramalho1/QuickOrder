#ifndef PRODUCTREGISTERMENU_H
#define PRODUCTREGISTERMENU_H

#include "menu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ProductRegisterMenu; }
QT_END_NAMESPACE

class ProductRegisterMenu : public Menu{

    Q_OBJECT

public:
    ProductRegisterMenu(QWidget *parent = nullptr);
    virtual ~ProductRegisterMenu();
    void addToDatabase(QString productName, double price, QString ingredient1, QString ingredient2 = "", QString ingredient3 = "", QString ingredient4 = "", QString ingredient5 = "");

private slots:


    void on_registerButton_clicked();

    void on_backButton_clicked();

private:
    Ui::ProductRegisterMenu *ui;

};

#endif // PRODUCTREGISTERMENU_H

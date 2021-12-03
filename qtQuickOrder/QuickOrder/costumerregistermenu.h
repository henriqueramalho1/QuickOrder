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
    void addToDatabase(QString name, int tableId);
    bool isTableRegistered(int tableId);
    void loadCostumers(QString tableId);
    void updateTableStatus(QString tableId);

private slots:

    void on_backButton_clicked();

    void on_registerButton_clicked();

    void on_tableSelect_textChanged(const QString &arg1);

private:
    Ui::CostumerRegisterMenu *ui;

};

#endif // COSTUMERREGISTERMENU_H

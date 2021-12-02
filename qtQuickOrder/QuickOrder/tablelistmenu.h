#ifndef TABLELISTMENU_H
#define TABLELISTMENU_H

#include <QWidget>
#include "menu.h"
#include "table.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TableListMenu; }
QT_END_NAMESPACE

class TableListMenu : public Menu
{
    Q_OBJECT
public:
    TableListMenu(QWidget* parent = nullptr);
    virtual ~TableListMenu();
    void loadTableList();
    void addToDatabase(int id, int status);
    void setItemColor(int i, int r, int g, int b);

private slots:
    void on_backPushButton_clicked();

    void on_addPushButton_clicked();

    void on_activatePushButton_clicked();

    void on_desactivatePushButton_clicked();

private:
    Ui::TableListMenu *ui;
    int tableCount;
    std::vector<Table*> tableList;
};

#endif // TABLELISTMENU_H

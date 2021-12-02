#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include "database.h"

class Menu : public QWidget
{
    Q_OBJECT

private:
    static Database database;

public:
    Menu(QWidget *parent = nullptr);
    virtual ~Menu();
};

#endif // MENU_H

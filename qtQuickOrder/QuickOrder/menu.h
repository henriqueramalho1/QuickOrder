#ifndef MENU_H
#define MENU_H

#include <QWidget>

class Menu : public QWidget
{
    Q_OBJECT
public:
    Menu(QWidget *parent = nullptr);
    virtual ~Menu();
};

#endif // MENU_H

#include "tablelistmenu.h"
#include "./ui_tablelistmenu.h"
#include <iostream>

TableListMenu::TableListMenu(QWidget* parent):
    Menu(parent),
    ui(new Ui::TableListMenu),
    tableList()
{
    ui->setupUi(this);
    tableCount = 1;
}

TableListMenu::~TableListMenu()
{
    for(auto it = tableList.begin(); it != tableList.end(); it++)
    {
        Table* table = *it;
        tableList.erase(it);
    }

    delete ui;
}

void TableListMenu::on_backPushButton_clicked()
{
    close();
}


void TableListMenu::on_addPushButton_clicked()
{
    std::string mesa = "Mesa ";
    std::string number = std::to_string(tableCount);

    QString textQ = QString::fromStdString(mesa+number);

    Table* table = new Table(tableCount, textQ.toStdString());
    tableList.push_back(table);

    ui->listWidget->addItem(textQ);
    QColor red;
    red.setRgb(247,177,192);
    red.setAlpha(100);
    ui->listWidget->item(tableCount - 1)->setBackground(QBrush(QColor(red)));
    tableCount++;
}


void TableListMenu::on_activatePushButton_clicked()
{
    QList<QListWidgetItem*> selected = ui->listWidget->selectedItems();

    for(auto it = selected.begin(); it != selected.end(); it++)
    {
        std::string name = (*it)->text().toStdString();
        std::cout << name << std::endl;
        QColor green;
        green.setRgb(203, 246, 212);
        green.setAlpha(150);
       (*it)->setBackground(QBrush(QColor(green)));

        for(auto it2 = tableList.begin(); it2 != tableList.end(); it2++)
        {
            if((*it2)->getName() == name)
            {
                (*it2)->changeStatus(true);
                std::cout << "Mudando status para (TRUE) da " << (*it2)->getName() << " id: " << (*it2)->getId() << std::endl;
            }
        }
    }
}


void TableListMenu::on_desactivatePushButton_clicked()
{
    QList<QListWidgetItem*> selected = ui->listWidget->selectedItems();

    for(auto it = selected.begin(); it != selected.end(); it++)
    {
        std::string name = (*it)->text().toStdString();
        std::cout << name << std::endl;
        QColor red;
        red.setRgb(247,177,192);
        red.setAlpha(100);
       (*it)->setBackground(QBrush(QColor(red)));

        for(auto it2 = tableList.begin(); it2 != tableList.end(); it2++)
        {
            if((*it2)->getName() == name)
            {
                (*it2)->changeStatus(false);
                std::cout << "Mudando status para (FALSE) da " << (*it2)->getName() << " id: " << (*it2)->getId() << std::endl;
            }
        }
    }

}


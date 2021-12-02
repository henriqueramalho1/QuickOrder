#include "tablelistmenu.h"
#include "./ui_tablelistmenu.h"
#include <iostream>
#include <QMessageBox>

TableListMenu::TableListMenu(QWidget* parent):
    Menu(parent),
    ui(new Ui::TableListMenu),
    tableList()
{
    ui->setupUi(this);
    tableCount = 0;
    loadTableList();
}

TableListMenu::~TableListMenu()
{
    for(auto it = tableList.begin(); it != tableList.end();)
    {
        Table* table = *it;
        std::cout << "Deletando " << table->getName() <<std::endl;
        tableList.erase(it);
    }

    delete ui;
}

void TableListMenu::loadTableList()
{
    QSqlQuery query;

    query.prepare("select * from table_tb");


    if(query.exec())
    {
        while(query.next())
        {
            tableCount++;
            QString id = query.value(0).toString();
            int status = query.value(1).toInt();
            ui->listWidget->addItem(id);
            if(status == 1)
            {
                setItemColor(id.toInt() - 1, 203, 246, 212);
            }
            else
            {
                setItemColor(id.toInt() - 1, 247,177,192);
            }
        }
    }
}

void TableListMenu::setItemColor(int i, int r, int g, int b)
{
    QColor color;
    color.setRgb(r, g, b);
    color.setAlpha(100);
    ui->listWidget->item(i)->setBackground(QBrush(QColor(color)));
}


void TableListMenu::on_backPushButton_clicked()
{
    close();
}


void TableListMenu::on_addPushButton_clicked()
{
    tableCount++;
    std::string number = std::to_string(tableCount);
    QString textQ = QString::fromStdString(number);

    ui->listWidget->addItem(textQ);
    setItemColor(tableCount - 1, 247,177,192);

    addToDatabase(tableCount, 0);
}


void TableListMenu::on_activatePushButton_clicked()
{
    QList<QListWidgetItem*> selected = ui->listWidget->selectedItems();
    QSqlQuery query;

    for(auto it = selected.begin(); it != selected.end(); it++)
    {
        QString id = (*it)->text();
        QColor green;
        green.setRgb(203, 246, 212);
        green.setAlpha(100);
        (*it)->setBackground(QBrush(QColor(green)));

        query.prepare("update table_tb set status = 1 where id = "+id+"");
        query.exec();
    }
}


void TableListMenu::on_desactivatePushButton_clicked()
{
    QList<QListWidgetItem*> selected = ui->listWidget->selectedItems();
    QSqlQuery query;

    for(auto it = selected.begin(); it != selected.end(); it++)
    {
        QString id = (*it)->text();
        QColor red;
        red.setRgb(247,177,192);
        red.setAlpha(100);
       (*it)->setBackground(QBrush(QColor(red)));
        query.prepare("update table_tb set status = 0 where id = "+id+"");
        query.exec();
    }

}

void TableListMenu::addToDatabase(int id, int status = 0)
{
    QSqlQuery query;

    query.prepare("insert into table_tb (id, status) values (?, ?)");
    query.addBindValue(id);
    query.addBindValue(status);

    query.exec();
}

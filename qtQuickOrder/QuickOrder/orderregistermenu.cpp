#include "orderregistermenu.h"
#include "./ui_orderregistermenu.h"

OrderRegisterMenu::OrderRegisterMenu(QWidget* parent):
    Menu(parent), ui(new Ui::OrderRegisterMenu)
{
    ui->setupUi(this);
    loadActiveTables();
}

OrderRegisterMenu::~OrderRegisterMenu()
{
    delete ui;
}

void OrderRegisterMenu::on_pushButton_clicked()
{
    close();
}

void OrderRegisterMenu::loadCostumers(QString tableId)
{
    ui->costumerSelection->clear();

    QSqlQuery query;

    query.prepare("select * from costumer_tb where costumer_table = "+tableId+"");

    std::cout << "Preparing to exec load costumers from table " << tableId.toStdString() << std::endl;

    if(query.exec())
    {
        while(query.next())
        {
            QString name = query.value(1).toString();
            ui->costumerSelection->addItem(name);
        }
    }
}

void OrderRegisterMenu::loadActiveTables()
{
    QSqlQuery query;

    query.prepare("select * from table_tb where status = 1");

    if(query.exec())
    {
        while(query.next())
        {
            QString tableId = query.value(0).toString();
            ui->tableSelection->addItem(tableId);
        }
    }

}


void OrderRegisterMenu::on_tableSelection_currentTextChanged(const QString &arg1)
{
    loadCostumers(ui->tableSelection->currentText());
}


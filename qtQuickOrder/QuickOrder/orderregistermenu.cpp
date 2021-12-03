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


void OrderRegisterMenu::on_costumerSelection_itemDoubleClicked(QListWidgetItem *item)
{
    QString name = item->text();
    QString tableId = ui->tableSelection->currentText();
    QSqlQuery query;

    int id;

    std::cout << name.toStdString() << std::endl;
    std::cout << tableId.toStdString() << std::endl;

    query.prepare("select * from costumer_tb where costumer_table = "+tableId+" and name = '"+name+"'");

    if(query.exec())
    {
        while(query.next())
        {
            id = query.value(0).toInt();
        }
    }

    hide();

    ProductListMenu* productListMenu = new ProductListMenu(nullptr, id);

    productListMenu->show();

    QEventLoop loop;
    connect(productListMenu, SIGNAL(destroyed()), &loop, SLOT(quit()));
    loop.exec();

    show();
}


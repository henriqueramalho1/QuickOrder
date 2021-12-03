#include "productlistmenu.h"
#include "./ui_productlistmenu.h"

ProductListMenu::ProductListMenu(QWidget* parent, int i):
    Menu(parent), ui(new Ui::ProductListMenu), costumerId(i)
{
    ui->setupUi(this);
    loadProducts();
}

ProductListMenu::~ProductListMenu()
{
    ui->productWidget->clear();
    delete ui;
}

void ProductListMenu::on_backPushButton_clicked()
{
    close();
}

void ProductListMenu::loadProducts()
{
    QSqlQuery query;

    query.prepare("select * from product_tb");

    if(query.exec())
    {
        while(query.next())
        {
            QTreeWidgetItem* item = new QTreeWidgetItem();
            item->setText(0, query.value(1).toString());
            ui->productWidget->addTopLevelItem(item);
            QTreeWidgetItem* ing1 = new QTreeWidgetItem();
            ing1->setText(0, query.value(2).toString());
            item->addChild(ing1);

            if(query.value(3).toString() != "")
            {
                QTreeWidgetItem* ing2 = new QTreeWidgetItem();
                ing2->setText(0, query.value(3).toString());
                item->addChild(ing2);
            }

            if(query.value(4).toString() != "")
            {
                QTreeWidgetItem* ing3 = new QTreeWidgetItem();
                ing3->setText(0, query.value(4).toString());
                item->addChild(ing3);
            }

            if(query.value(5).toString() != "")
            {
                QTreeWidgetItem* ing4 = new QTreeWidgetItem();
                ing4->setText(0, query.value(5).toString());
                item->addChild(ing4);
            }

            if(query.value(6).toString() != "")
            {
                QTreeWidgetItem* ing5 = new QTreeWidgetItem();
                ing5->setText(0, query.value(6).toString());
                item->addChild(ing5);
            }
        }
    }
}


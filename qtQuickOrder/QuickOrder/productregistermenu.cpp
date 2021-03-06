#include "productregistermenu.h"
#include "./ui_productregistermenu.h"
#include "product.h"
#include <QMessageBox>

#include <iostream>

ProductRegisterMenu::ProductRegisterMenu(QWidget *parent): Menu(parent), ui(new Ui::ProductRegisterMenu){
    ui->setupUi(this);
}

ProductRegisterMenu::~ProductRegisterMenu(){
    delete ui;
}


void ProductRegisterMenu::on_registerButton_clicked()
{
    QString productName = ui->nameInput->text();
    double price = ui->doubleSpinBox->value();
    QString ingredient1 = ui->ingredientInput->text();
    QString ingredient2 = ui->ingredientInput_2->text();
    QString ingredient3 = ui->ingredientInput_3->text();
    QString ingredient4 = ui->ingredientInput_4->text();
    QString ingredient5 = ui->ingredientInput_5->text();

    if(productName == "" || ingredient1 == "" || price == 0.0)
    {
        QMessageBox::warning(this,"", "Não é possível cadastrar esse produto, verifique os campos");
        return;
    }

    std::cout << price << std::endl;

    addToDatabase(productName, price, ingredient1, ingredient2, ingredient3, ingredient4, ingredient5);

    close();
}

void ProductRegisterMenu::on_backButton_clicked()
{
    close();
}

void ProductRegisterMenu::addToDatabase(QString productName, double price, QString ingredient1, QString ingredient2, QString ingredient3, QString ingredient4, QString ingredient5)
{
    QSqlQuery query;

    query.prepare("insert into product_tb (name, ingredient1, ingredient2, ingredient3, ingredient4, ingredient5, price) values (?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue(productName);
    query.addBindValue(ingredient1);
    query.addBindValue(ingredient2);
    query.addBindValue(ingredient3);
    query.addBindValue(ingredient4);
    query.addBindValue(ingredient5);
    query.addBindValue(price);

    if(query.exec())
    {
        QMessageBox::information(this, "", "Produto cadastrado com sucesso.");
    }
}



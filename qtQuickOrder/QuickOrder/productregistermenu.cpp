#include "productregistermenu.h"
#include "./ui_productregistermenu.h"
#include "product.h"

#include <iostream>

ProductRegisterMenu::ProductRegisterMenu(QWidget *parent, QWidget *caller): Menu(parent, caller), ui(new Ui::ProductRegisterMenu){
    ui->setupUi(this);
}

ProductRegisterMenu::~ProductRegisterMenu(){
    delete ui;
}


void ProductRegisterMenu::on_registerButton_clicked()
{
    printf("clicked\n");
    Product *newProduct = new Product(ui->nameInput->text().toStdString());
    newProduct->addIngredient(ui->ingredientInput->text().toStdString());
    newProduct->addIngredient(ui->ingredientInput_2->text().toStdString());
    newProduct->addIngredient(ui->ingredientInput_3->text().toStdString());
    newProduct->addIngredient(ui->ingredientInput_4->text().toStdString());
    newProduct->addIngredient(ui->ingredientInput_5->text().toStdString());

    std::cout << newProduct->getName() << std::endl;
    //guardar no banco
    delete newProduct;

    close();
}



void ProductRegisterMenu::on_backButton_clicked()
{
    close();
}


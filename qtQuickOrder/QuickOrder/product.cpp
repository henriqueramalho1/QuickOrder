#include "product.h"

Product::Product(std::string n):
    name(n),
    ingredientsList()
{

}

Product::~Product()
{

}

std::string Product::getName()
{
    return name;
}

void Product::addIngredient(std::string ingredientName){
    ingredientsList.emplace_back(ingredientName);
}

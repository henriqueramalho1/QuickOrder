#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <vector>

#include "ingredient.h"

class Product
{
private:
    std::string name;
    std::vector<Ingredient> ingredientsList;

public:
    Product(std::string n = "");
    ~Product();
    std::string getName();
    void addIngredient(std::string ingredientName);
};

#endif // PRODUCT_H

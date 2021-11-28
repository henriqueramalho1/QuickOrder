#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>

class Ingredient
{
private:
    std::string name;

public:
    Ingredient(std::string n = "");
    ~Ingredient();
    std::string getName();
};

#endif // INGREDIENT_H

#include "ingredient.h"

Ingredient::Ingredient(std::string n):
    name(n)
{

}

Ingredient::~Ingredient()
{

}

std::string Ingredient::getName()
{
    return name;
}

#include "costumer.h"

Costumer::Costumer(std::string n):
    name(n),
    productCart()
{

}

Costumer::~Costumer()
{

}

std::string Costumer::getName()
{
    return name;
}

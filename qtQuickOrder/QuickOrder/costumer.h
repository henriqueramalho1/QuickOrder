#ifndef COSTUMER_H
#define COSTUMER_H

#include <string>
#include <vector>

#include "product.h"

class Costumer
{
private:
    std::string name;
    std::vector<Product> productCart;

public:
    Costumer(std::string n = "");
    ~Costumer();
    std::string getName();
};

#endif // COSTUMER_H

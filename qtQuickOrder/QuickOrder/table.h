#ifndef TABLE_H
#define TABLE_H

#include <vector>
#include <string>

#include "costumer.h"

class Table
{
private:
    int id;
    std::vector<Costumer*> costumers;

public:
    Table(int i = -1);
    ~Table();
    void addCostumer(Costumer* pCostumer);
    Costumer* removeCostumer(std::string name);
    Costumer* getCostumer(std::string name);
};

#endif // TABLE_H

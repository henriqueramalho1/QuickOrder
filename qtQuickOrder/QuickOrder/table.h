#ifndef TABLE_H
#define TABLE_H

#include <vector>
#include <string>

#include "costumer.h"

class Table
{
private:
    int id;
    std::string name;
    bool active;
    std::vector<Costumer*> costumers;

public:
    Table(int i = -1, std::string n = "");
    ~Table();
    void addCostumer(Costumer* pCostumer);
    Costumer* removeCostumer(std::string name);
    Costumer* getCostumer(std::string name);
    void changeStatus(bool b);
    std::string getName();
    int getId();
};

#endif // TABLE_H

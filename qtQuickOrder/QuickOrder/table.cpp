#include "table.h"

Table::Table(int i, std::string n):
    id(i), costumers(), active(false), name(n)
{

}

Table::~Table()
{
    costumers.clear();
}

void Table::addCostumer(Costumer* pCostumer)
{
    costumers.push_back(pCostumer);
}

Costumer* Table::removeCostumer(std::string name)
{
    for(auto it = costumers.begin(); it != costumers.end(); it++)
    {
        if((*it)->getName() == name)
        {
            Costumer* pCostumer = *it;
            costumers.erase(it);
            return pCostumer;
        }
    }

    return NULL;
}

Costumer* Table::getCostumer(std::string name)
{
    for(auto it = costumers.begin(); it != costumers.end(); it++)
    {
        if((*it)->getName() == name)
            return *it;
    }

    return NULL;
}

void Table::changeStatus(bool b)
{
    active = b;
}

std::string Table::getName()
{
    return name;
}

int Table::getId()
{
    return id;
}

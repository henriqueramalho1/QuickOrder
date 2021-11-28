#include "table.h"

Table::Table(int i):
    id(i), costumers()
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

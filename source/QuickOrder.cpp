#include "QuickOrder.hpp"

QuickOrder::QuickOrder():
    graphicsManager()
{

}

QuickOrder::~QuickOrder()
{

}

void QuickOrder::execute()
{
    while(open())
    {
        graphicsManager.update();
    }
}

bool QuickOrder::open()
{
    return graphicsManager.isWindowOpen();
}
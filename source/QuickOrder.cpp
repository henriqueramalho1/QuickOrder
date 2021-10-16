#include "QuickOrder.hpp"

QuickOrder::QuickOrder():
    graphicsManager(),
    stateManager()
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
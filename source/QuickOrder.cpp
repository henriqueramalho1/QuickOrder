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
    while(!close())
    {
        graphicsManager.update();
    }
}

bool QuickOrder::close()
{
    graphicsManager.isWindowOpen();
}
#pragma once

#include "GraphicsManager.hpp"
#include "StateManager.hpp"

class QuickOrder
{
private:

    GraphicsManager graphicsManager;
    StateManager stateManager;

public:

    QuickOrder();
    ~QuickOrder();
    void execute();
    bool open();
};
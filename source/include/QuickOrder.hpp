#pragma once

#include "GraphicsManager.hpp"

class QuickOrder
{
private:

    GraphicsManager graphicsManager;


public:

    QuickOrder();
    ~QuickOrder();
    void execute();
    bool close();
};
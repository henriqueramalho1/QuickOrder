#include "GraphicsManager.hpp"

GraphicsManager::GraphicsManager():
    window(sf::VideoMode(800, 600), "QuickOrder")
{

}

GraphicsManager::~GraphicsManager()
{
    
}

void GraphicsManager::update()
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
             window.close();
    }
}

bool GraphicsManager::isWindowOpen()
{
    return window.isOpen();
}
#pragma once

#include <SFML/Graphics.hpp>

class GraphicsManager
{
private:
    sf::RenderWindow window;

public:
    GraphicsManager();
    ~GraphicsManager();
    void update();
    bool isWindowOpen();
};
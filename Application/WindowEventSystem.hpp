#pragma once
#include "entityx/System.h"
#include "SFML/Graphics/RenderWindow.hpp"

using namespace entityx;

class WindowEventSystem : public System<WindowEventSystem>
{
    sf::RenderWindow& renderWindow;
public:
    WindowEventSystem(sf::RenderWindow&);
    void update(EntityManager&, EventManager&, TimeDelta);
};


#include "WindowEventSystem.hpp"
#include "SFML/Window/Event.hpp"

WindowEventSystem::WindowEventSystem(sf::RenderWindow& window)
    : renderWindow(window)
{}

void WindowEventSystem::update(EntityManager &, EventManager &, TimeDelta)
{
    sf::Event event;
    while(renderWindow.pollEvent(event))
    {
        switch(event.type)
        {
        case sf::Event::Closed:
        case sf::Event::KeyPressed:
            renderWindow.close();
            break;

        default:
            break;
        }
    }
}

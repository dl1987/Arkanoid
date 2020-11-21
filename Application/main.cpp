#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Application.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "arkanoid", sf::Style::Fullscreen);
    Application app(window);
    sf::Clock clock;

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            switch(event.type)
            {
            case sf::Event::Closed:
            case sf::Event::KeyPressed:
                window.close();
                break;

            default:
                break;
            }
        }

        window.clear();
        app.update(clock.restart().asSeconds());
        window.display();
    }
    return 0;
}

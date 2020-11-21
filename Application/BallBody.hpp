#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

struct BallBody
{
    BallBody(const sf::Vector2f& p, const sf::Vector2f& d)
        : position(p), direction(d)
    {std::cout << "ball body created\n";}
    sf::Vector2f position;
    sf::Vector2f direction;
};

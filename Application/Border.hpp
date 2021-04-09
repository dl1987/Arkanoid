#pragma once
#include "Drawable.hpp"
#include "SFML/Graphics/RectangleShape.hpp"


class Border : public Drawable
{
    sf::RectangleShape shape;
public:
    void draw(sf::RenderTarget&);
    void setPosition(const sf::Vector2f&);
    sf::FloatRect getGlobalBounds() const;
    Border(const sf::Vector2f );
};

class VerticalBorder : public Border
{
public:
    VerticalBorder() : Border(sf::Vector2f(10, 900)) {}
};

class HorizontalBorder : public Border
{
public:
    HorizontalBorder() : Border(sf::Vector2f(1200, 10)) {}
};

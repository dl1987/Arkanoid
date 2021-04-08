#include "Border.hpp"
#include "SFML/Graphics/RenderTarget.hpp"

Border::Border(const sf::Vector2f vect)
    : shape(vect)
{
    shape.setFillColor(sf::Color::Blue);
}

void Border::draw(sf::RenderTarget & target)
{
    target.draw(shape);
}

void Border::setPosition(const sf::Vector2f & vect)
{
    shape.setPosition(vect);
}

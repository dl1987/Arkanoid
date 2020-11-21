#include "BallShape.hpp"

constexpr int RADIUS = 10;

BallShape::BallShape()
    : shape(RADIUS)
{
    shape.setFillColor(sf::Color::White);
    shape.setOrigin(10,10);
}

void BallShape::setPosition(sf::Vector2f & position)
{
    shape.setPosition(position);
}

void BallShape::draw(sf::RenderTarget& target)
{
    target.draw(shape);
}

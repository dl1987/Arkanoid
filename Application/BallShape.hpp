#pragma once

#include "IBallShape.hpp"
#include <SFML/Graphics.hpp>


class BallShape : public IBallShape
{
public:
    BallShape();

    void setPosition(sf::Vector2f&) override;
    void draw(sf::RenderTarget&) override;
private:
    sf::CircleShape shape;
};


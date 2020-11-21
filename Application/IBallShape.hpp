#pragma once
#include <SFML/Graphics.hpp>

namespace sf
{
class RenderTarget;
}

class IBallShape
{
public:
    virtual void setPosition(sf::Vector2<float>&) = 0;
    virtual void draw(sf::RenderTarget&) = 0;
};

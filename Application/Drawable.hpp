#pragma once

namespace sf
{
class RenderTarget;
}

class Drawable
{
public:
    virtual void draw(sf::RenderTarget&) = 0;
};

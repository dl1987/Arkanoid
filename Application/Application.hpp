#pragma once
#include "entityx/entityx.h"

namespace sf
{
class RenderTarget;
}


class Application : public entityx::EntityX
{
public:
    Application(sf::RenderTarget&);

    void update(entityx::TimeDelta);
};


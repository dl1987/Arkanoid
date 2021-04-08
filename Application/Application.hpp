#pragma once
#include "entityx/entityx.h"

namespace sf
{
class RenderWindow;
}


class Application : public entityx::EntityX
{
public:
    Application(sf::RenderWindow&);

    void update(entityx::TimeDelta);
};


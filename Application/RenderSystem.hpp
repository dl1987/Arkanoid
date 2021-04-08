#pragma once
#include "entityx/System.h"

namespace sf
{
class RenderTarget;
}

using namespace entityx;

class RenderSystem : public System<RenderSystem>
{
    sf::RenderTarget& renderTarget;
public:
    RenderSystem(sf::RenderTarget&);
    void update(EntityManager&, EventManager&, TimeDelta) override;
};


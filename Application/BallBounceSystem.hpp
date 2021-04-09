#pragma once
#include <entityx/System.h>
#include <SFML/Graphics.hpp>
#include "Bounce.hpp"

using namespace entityx;

class BallBounceSystem : public System<BallBounceSystem>
{
    Bounce* bounce_ball_ptr = nullptr;
    std::vector<Bounce*> bounce_elements;

    void collectBouncePointers(EntityManager&);
    void cleanPointers();
public:
    void update(EntityManager&, EventManager&, TimeDelta) override;
};


#pragma once
#include <entityx/System.h>

struct BallUpdateSystem : entityx::System<BallUpdateSystem>
{
public:
    void update(entityx::EntityManager&, entityx::EventManager&, entityx::TimeDelta) override;
};


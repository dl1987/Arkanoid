#pragma once
#include "entityx/System.h"


struct SpawnSystem : public entityx::System<SpawnSystem>
{
public:
    void update(entityx::EntityManager&, entityx::EventManager&, entityx::TimeDelta) override;
private:
    int numberOfBalls = 0;
};


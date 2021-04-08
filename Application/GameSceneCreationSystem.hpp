#pragma once
#include "entityx/System.h"

using namespace entityx;

class GameSceneCreationSystem : public System<GameSceneCreationSystem>
{
public:
    GameSceneCreationSystem();
    void update(EntityManager&, EventManager&, TimeDelta) override;
};


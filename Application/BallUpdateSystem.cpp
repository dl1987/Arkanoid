#include "BallUpdateSystem.hpp"
#include "BallBody.hpp"
#include "BallShape.hpp"

void BallUpdateSystem::update(entityx::EntityManager& entityManager,
                              entityx::EventManager&,
                              entityx::TimeDelta)
{
    auto function = [](entityx::Entity, BallBody& body, IBallShape& ballShape)
    {
        body.position += body.direction;
        ballShape.setPosition(body.position);
    };
    entityManager.each<BallBody, BallShape>(function);
}

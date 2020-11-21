#include "BallUpdateSystem.hpp"
#include "BallBody.hpp"

void BallUpdateSystem::update(entityx::EntityManager& entityManager,
                              entityx::EventManager&,
                              entityx::TimeDelta)
{
    auto function = [](entityx::Entity, BallBody& body)
    {
        body.position += body.direction;
    };
    entityManager.each<BallBody>(function);
}

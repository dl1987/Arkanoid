#include "SpawnSystem.hpp"
#include "BallBody.hpp"
#include "BallShape.hpp"
#include <SFML/Graphics.hpp>

void SpawnSystem::update(entityx::EntityManager& entityManager,
                         entityx::EventManager&,
                         entityx::TimeDelta)
{
    if(numberOfBalls < 1)
    {
        numberOfBalls += 1;
        auto ballEntity = entityManager.create();

        ballEntity.assign<BallBody>(sf::Vector2f(500, 300), sf::Vector2f(1, 0));

        BallShape shape;
        ballEntity.assign<BallShape>(shape);
    }
}

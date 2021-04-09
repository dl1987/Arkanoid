#include "SpawnSystem.hpp"
#include "BallBody.hpp"
#include "BallShape.hpp"
#include <SFML/Graphics.hpp>
#include "Bounce.hpp"

void SpawnSystem::update(entityx::EntityManager& entityManager,
                         entityx::EventManager&,
                         entityx::TimeDelta)
{
    if(numberOfBalls < 1)
    {
        numberOfBalls += 1;
        auto ballEntity = entityManager.create();

        ballEntity.assign<BallBody>(sf::Vector2f(500, 300), sf::Vector2f(1, 1));

        BallShape shape;
        ballEntity.assign<BallShape>(shape);
        ballEntity.assign<Bounce>(Element::ball);
    }
}

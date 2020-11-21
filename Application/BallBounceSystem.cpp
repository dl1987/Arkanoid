#include "BallBounceSystem.hpp"
#include "BallBody.hpp"

BallBounceSystem::BallBounceSystem(sf::RenderTarget& target)
    :size(target.getSize())
{}

bool isBorderReached(int position, int direction, int max)
{
    return position + direction < 0 or position + direction >= max;
}

void BallBounceSystem::update(entityx::EntityManager& entityManager, entityx::EventManager&, entityx::TimeDelta)
{
    auto function = [this](entityx::Entity, BallBody& body)
    {
        if(isBorderReached(body.position.x, body.direction.x, size.x))
        {
            body.direction.x = -body.direction.x;
        }
        if (isBorderReached(body.position.y, body.direction.y, size.y))
        {
            body.direction.y = -body.direction.y;
        }
    };

    entityManager.each<BallBody>(function);
}

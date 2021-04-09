#include "BallUpdateSystem.hpp"
#include "BallBody.hpp"
#include "BallShape.hpp"
#include "Bounce.hpp"

namespace
{
constexpr auto verticalBounce = [](Entity, BallBody& ballBody)
{
    ballBody.direction.x = -ballBody.direction.x;
};

constexpr auto horizontalBounce = [](Entity, BallBody& ballBody)
{
    ballBody.direction.y = -ballBody.direction.y;
};

constexpr auto ballUpdate = [](entityx::Entity, BallBody& body, IBallShape& ballShape, Bounce& bounce)
{
    body.position += body.direction;
    ballShape.setPosition(body.position);
    bounce.update(ballShape.getGlobalBounds());
};

}

void BallUpdateSystem::configure(EventManager & eventManager)
{
    eventManager.subscribe<VerticalBounce>(*this);
    eventManager.subscribe<HorizontalBounce>(*this);
}

void BallUpdateSystem::update(entityx::EntityManager& entityManager,
                              entityx::EventManager&,
                              entityx::TimeDelta)
{
    switch(operation)
    {
    case Operation::VerticalBounce:
        entityManager.each<BallBody>(verticalBounce);
        break;
    case Operation::HorizontalBounce:
        entityManager.each<BallBody>(horizontalBounce);
        break;
    case Operation::none:
    default:
        break;
    }

    entityManager.each<BallBody, BallShape, Bounce>(ballUpdate);
    operation = Operation::none;
}

void BallUpdateSystem::receive(const VerticalBounce &)
{
    operation = Operation::VerticalBounce;
}

void BallUpdateSystem::receive(const HorizontalBounce &)
{
    operation = Operation::HorizontalBounce;
}

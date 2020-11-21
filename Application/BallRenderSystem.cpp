#include "BallRenderSystem.hpp"
#include "BallBody.hpp"
#include "BallShape.hpp"
#include <iostream>

BallRenderSystem::BallRenderSystem(sf::RenderTarget& target)
    : target(target)
{}

void BallRenderSystem::update(entityx::EntityManager& entityManager,
                              entityx::EventManager&,
                              entityx::TimeDelta)
{
    auto function = [this](entityx::Entity, BallBody& body, IBallShape& ballShape)
    {
        ballShape.setPosition(body.position);
        ballShape.draw(target);
    };
    entityManager.each<BallBody, BallShape>(function);

}

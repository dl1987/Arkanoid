#include "RenderSystem.hpp"
#include "SFML/Graphics/RenderTarget.hpp"
#include "Drawable.hpp"
#include "BallShape.hpp"
#include "Border.hpp"

RenderSystem::RenderSystem(sf::RenderTarget& target)
    : renderTarget(target)
{}

void RenderSystem::update(EntityManager & entityManager, EventManager &, TimeDelta)
{
    auto draw = [&](Entity, Drawable& drawable) { drawable.draw(renderTarget); };
    entityManager.each<BallShape>(draw);
    entityManager.each<Border>(draw);
}

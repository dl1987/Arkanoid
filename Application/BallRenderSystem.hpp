#pragma once
#include <entityx/System.h>
#include <SFML/Graphics.hpp>

class BallRenderSystem : public entityx::System<BallRenderSystem>
{
public:
    explicit BallRenderSystem(sf::RenderTarget&);
    void update(entityx::EntityManager&, entityx::EventManager&, entityx::TimeDelta) override;

private:
    sf::RenderTarget& target;
};


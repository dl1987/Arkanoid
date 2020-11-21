#pragma once
#include <entityx/System.h>
#include <SFML/Graphics.hpp>

class BallBounceSystem : public entityx::System<BallBounceSystem>
{
public:
    explicit BallBounceSystem(sf::RenderTarget&);
    void update(entityx::EntityManager&, entityx::EventManager&, entityx::TimeDelta) override;
private:
    sf::Vector2u size;
};


#include "Application.hpp"
#include "SpawnSystem.hpp"
#include "BallRenderSystem.hpp"
#include "BallUpdateSystem.hpp"
#include "BallBounceSystem.hpp"


Application::Application(sf::RenderTarget& renderTarget)
{
    systems.add<SpawnSystem>();
    systems.add<BallRenderSystem>(renderTarget);
    systems.add<BallUpdateSystem>();
    systems.add<BallBounceSystem>(renderTarget);
    systems.configure();
}

void Application::update(entityx::TimeDelta timeDelta)
{
    systems.update_all(timeDelta);
}


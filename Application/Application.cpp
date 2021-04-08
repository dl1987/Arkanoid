#include "Application.hpp"
#include "SpawnSystem.hpp"
#include "BallRenderSystem.hpp"
#include "BallUpdateSystem.hpp"
#include "BallBounceSystem.hpp"
#include "WindowEventSystem.hpp"


Application::Application(sf::RenderWindow& renderWindow)
{
    systems.add<SpawnSystem>();
    systems.add<BallRenderSystem>(renderWindow);
    systems.add<BallUpdateSystem>();
    systems.add<BallBounceSystem>(renderWindow);
    systems.add<WindowEventSystem>(renderWindow);
    systems.configure();
}

void Application::update(entityx::TimeDelta timeDelta)
{
    systems.update_all(timeDelta);
}


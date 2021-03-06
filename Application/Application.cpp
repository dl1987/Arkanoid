#include "Application.hpp"
#include "SpawnSystem.hpp"
#include "BallUpdateSystem.hpp"
#include "BallBounceSystem.hpp"
#include "WindowEventSystem.hpp"
#include "RenderSystem.hpp"
#include "GameSceneCreationSystem.hpp"


Application::Application(sf::RenderWindow& renderWindow)
{
    systems.add<GameSceneCreationSystem>();
    systems.add<SpawnSystem>();
    systems.add<BallUpdateSystem>();
    systems.add<BallBounceSystem>();
    systems.add<WindowEventSystem>(renderWindow);
    systems.add<RenderSystem>(renderWindow);
    systems.configure();
}

void Application::update(entityx::TimeDelta timeDelta)
{
    systems.update_all(timeDelta);
}


#include "GameSceneCreationSystem.hpp"
#include "Border.hpp"

namespace
{
template<typename BorderT>
void createAndAssignBorderEntity(EntityManager& entityManager, sf::Vector2f position)
{
    auto entity = entityManager.create();
    BorderT border;
    border.setPosition(position);
    entity.assign<Border>(border);
}
static bool first_time = true;
}

GameSceneCreationSystem::GameSceneCreationSystem()
{}

void GameSceneCreationSystem::update(EntityManager & entityManager, EventManager &, TimeDelta)
{
    if(not first_time) return;
    first_time = false;
    createAndAssignBorderEntity<VerticalBorder>(entityManager, sf::Vector2f(10,10));
    createAndAssignBorderEntity<VerticalBorder>(entityManager, sf::Vector2f(1200,10));
    createAndAssignBorderEntity<HorizontalBorder>(entityManager, sf::Vector2f(10,10));
    createAndAssignBorderEntity<HorizontalBorder>(entityManager, sf::Vector2f(10, 900));
}

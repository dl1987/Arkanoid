#include "BallBounceSystem.hpp"
#include "BallBody.hpp"
#include "Bounce.hpp"
#include "Events.hpp"

void BallBounceSystem::update(EntityManager& entityManager, EventManager& eventManager, TimeDelta)
{
    collectBouncePointers(entityManager);

    if(bounce_ball_ptr == nullptr) return;

    for(auto& bounce: bounce_elements)
    {
        switch(bounce_ball_ptr->check(*bounce))
        {
        case Bounce::Type::vertical:
            eventManager.emit<VerticalBounce>();
            break;
        case Bounce::Type::horizontal:
            eventManager.emit<HorizontalBounce>();
            break;
        case Bounce::Type::none:
        default:
            break;
        }
    }

    cleanPointers();
}

void BallBounceSystem::collectBouncePointers(EntityManager & entityManager)
{
    auto function = [&](Entity, Bounce& bounce)
    {
        if(bounce.isBall())
            bounce_ball_ptr = &bounce;
        else
            bounce_elements.push_back(&bounce);
    };

    entityManager.each<Bounce>(function);
}

void BallBounceSystem::cleanPointers()
{
    bounce_ball_ptr = nullptr;
    bounce_elements.clear();
}

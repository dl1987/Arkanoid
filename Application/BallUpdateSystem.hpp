#pragma once
#include <entityx/System.h>

struct VerticalBounce;
struct HorizontalBounce;

using namespace entityx;

enum class Operation
{
    none,
    VerticalBounce,
    HorizontalBounce
};

class BallUpdateSystem : public System<BallUpdateSystem>, public Receiver<BallUpdateSystem>
{
    Operation operation;
public:
    void configure(EventManager&) override;
    void update(EntityManager&, EventManager&, TimeDelta) override;
    void receive(const VerticalBounce&);
    void receive(const HorizontalBounce&);
};


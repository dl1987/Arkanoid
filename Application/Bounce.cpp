#include "Bounce.hpp"

Bounce::Type Bounce::check(const Bounce& other)
{
    sf::FloatRect result_rect;
    auto result = rect.intersects(other.rect, result_rect);
    if(not result)
        return Bounce::Type::none;
    if(result_rect.height < result_rect.width)
        return Bounce::Type::horizontal;
    else
        return Bounce::Type::vertical;
}

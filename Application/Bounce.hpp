#pragma once
#include "SFML/Graphics.hpp"

enum class Element
{
    other,
    ball
};

class Bounce
{
    sf::FloatRect rect;
    Element element;

public:
    enum class Type
    {
        vertical,
        horizontal,
        none
    };

    Bounce(Element element) : element(element) {}
    Bounce() = default;
    Type check(const Bounce&);
    void update(const sf::FloatRect& r) { rect = r; }
    bool isBall() { return element == Element::ball; }
};


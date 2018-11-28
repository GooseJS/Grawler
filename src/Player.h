#pragma once

#include <SFML/Graphics.hpp>

#include "gstl/Math.h"

class Player
{
private:
    GSTL::Vec2<float> position;

    sf::RectangleShape sprite;

    int health;

    bool onGround;

public:
    Player(float x, float y);

    void draw(sf::RenderWindow &renderWindow);
    void update(float dt);

    void move(CardinalDirection direction, float dt);
    void jump();
};
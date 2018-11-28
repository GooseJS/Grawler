#include "Player.h"

Player::Player(float x, float y)
{
    position = GSTL::Vec2<float>(x, y);
    sprite = sf::RectangleShape(sf::Vector2f(100, 100));
    sprite.setFillColor(sf::Color::Red);
    health = 5;
    onGround = false;
}

void Player::draw(sf::RenderWindow &renderWindow)
{
    sprite.setPosition(position.x(), position.y());
    renderWindow.draw(sprite);
}

void Player::update(float dt)
{
    if (position.y() < 0)
    {
        position.y(0);
        onGround = true;
    }
}

void Player::move(CardinalDirection direction, float dt)
{
    dt *= 200;
    if (direction == Left)
        position.x(position.x() - dt);
    else if (direction == Right)
        position.x(position.x() + dt);
}

void Player::jump()
{

}

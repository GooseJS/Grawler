#include <SFML/Graphics.hpp>

#include "Player.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 640), "Grawler");

    Player player(200, 100);

    std::array<bool, sf::Keyboard::KeyCount> keyStates{};
    keyStates.fill(false);

    sf::Clock deltaClock;

    while (window.isOpen())
    {
        sf::Time dt = deltaClock.restart();

        sf::Event event{};
        while (window.pollEvent(event))
        {
             if (event.type == sf::Event::Closed)
                 window.close();
             else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Key::Q)
                 window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
            player.move(Right, dt.asSeconds());
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
            player.move(Left, dt.asSeconds());

        window.clear(sf::Color::White);
        player.draw(window);

        window.display();
    }

    return 0;
}
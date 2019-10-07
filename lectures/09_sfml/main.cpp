#include <iostream>
#include <list>
#include <algorithm>

#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "Awesome game");

    // In practice: Limits our game loop to 60 hz
    window.setFramerateLimit(60);

    int points = 0;

    // List of drawables. Any object that inherits sf::Drawable can be placed here.
    std::list<sf::Drawable*> objects;

    // Circle is the character controlled by the player
    auto circle = new sf::CircleShape(25.f);
    circle->setFillColor(sf::Color::Yellow);

    objects.push_back(circle);

    float circleX = 50.f;
    float circleY = 50.f;
    float circleSpeed = 5.f;

    // Food is an item that can be "picked up"
    auto food = new sf::CircleShape(10.f);
    food->setFillColor(sf::Color::Red);
    food->setPosition(200.f, 200.f);

    objects.push_back(food);

    // Game loop (main loop)
    while (window.isOpen())
    {
        sf::Event event;

        // Event loop
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear window to black
        window.clear();

        // Handle input
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            circleX -= circleSpeed;
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            circleX += circleSpeed;
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            circleY -= circleSpeed;
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            circleY += circleSpeed;

        // Move objects
        circle->setPosition(circleX, circleY);

        if (food && circle->getGlobalBounds().intersects(food->getGlobalBounds()))
        {
            std::cout << "Collision detected, adding points" << std::endl;
            points += 100;
            objects.erase(std::find(objects.begin(), objects.end(), food));
            delete food;
            food = nullptr;
        }

        // Draw objects
        for (auto object: objects)
            window.draw(*object);

        window.display();
    }

    return 0;
}
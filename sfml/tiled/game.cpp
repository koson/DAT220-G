#include <memory>
#include <iostream>

#include <SFML/Window.hpp>

#include "game.h"
#include "map/map.h"
#include "objects/object.h"
#include "objects/layer.h"
#include "objects/sprite.h"

bool Game::init()
{
    // Load map information from JSON into object list
    if (!map.loadFromFile("data/map.json"))
    {
        std::cout << "Failed to load map data." << std::endl;
        return false;
    }

    // Copy layer references from map object to Game list
    std::copy(map.getLayers().begin(), map.getLayers().end(), std::back_inserter(objects));

    // Copy sprite references from map object to Game list
    std::copy(map.getSprites().begin(), map.getSprites().end(), std::back_inserter(objects));

    // Standard SFML setup
    window.create(sf::VideoMode(640, 480), "Mario?");

    // Double the size of the screen
    sf::View view = window.getDefaultView();
    view.setSize(view.getSize().x / 2, view.getSize().y / 2);
    view.setCenter(view.getCenter().x / 2, view.getCenter().y / 2);
    window.setView(view);

    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(60);

    return true;
}

void Game::run()
{
    float deltaTime = 0;
    clock.restart();

    // Game loop
    while (gameTick(window, objects, deltaTime))
    {
        deltaTime = clock.getElapsedTime().asSeconds();
        clock.restart();
    }
}

// Process and draws one frame of the game
bool Game::gameTick(sf::RenderWindow& window, std::list<std::shared_ptr<Object>>& objects, float deltaTime)
{
    sf::Event event;

    // Process events from the OS
    while (window.pollEvent(event))
    {
        switch (event.type)
        {
            case sf::Event::Closed:
                window.close();
                return false;

            case sf::Event::KeyReleased:
                // Reload map on F5
                if (event.key.code == sf::Keyboard::F5)
                {
                    objects.clear();

                    if (!map.loadFromFile("data/map.json"))
                    {
                        std::cout << "Failed to reload map data." << std::endl;
                        return false;
                    }

                    std::copy(map.getLayers().begin(), map.getLayers().end(), std::back_inserter(objects));
                    std::copy(map.getSprites().begin(), map.getSprites().end(), std::back_inserter(objects));
                }

                // Exit program on escape
                if (event.key.code == sf::Keyboard::Escape)
                {
                    window.close();
                    return false;
                }
                break;

            default:
                // Ignore the other events
                break;
        }
    }

    window.clear(sf::Color::Black);

    // Process and render each object
    for (auto& object: objects)
    {
        object->process(deltaTime);
        object->draw(window);
    }

    window.display();

    return true;
}

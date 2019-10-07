/*

This example shows how to parse the map and object data in JSON exported from the Tiled editor.

Note: Here the objects know how to draw themselves, thus all classes depend on SFML.
      As an alternative a separate View could be implemented so that the SFML dependency
      only exists there.

C++ JSON library used in map.cpp: https://github.com/open-source-parsers/jsoncpp

*/
#include <iostream>
#include <list>

#include "game.h"

int main()
{
    Game game;

    if (!game.init())
    {
        std::cout << "Failed to initialize the game. Quitting." << std::endl;
        return -1;
    }

    game.run();

    return 0;
}

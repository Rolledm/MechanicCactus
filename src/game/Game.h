#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "EventDispatcher.h"

namespace Game {

    class Game {
    public:
        // TODO: init game settings by XML
        Game();
        ~Game();

        void start();

    private:
        sf::RenderWindow* window;
        EventDispatcher* eventDispatcher;
    };

}

#endif
#include "Game.h"
#include "../map/MapArray.h"
#include "../map/MapRenderer.h"

namespace Game {
    
    Game::Game() {
        window = new sf::RenderWindow(sf::VideoMode(1366, 768), "Mechanic Cactus");
        eventDispatcher = new EventDispatcher();
    }

    Game::~Game() {
        delete window;
        delete eventDispatcher;
    }

    void Game::start() {
        Map::MapArray a1("res/maps/map1", 7, 6);
        Tools::Renderer* mr = new Map::MapRenderer(&a1);

        while (window->isOpen())
        {
            sf::Event event;
            while (window->pollEvent(event))
            {
                eventDispatcher->handleEvent(window, event);
            }

            window->clear();

            mr->renderScreen(window);
            
            window->display();
        }
    }

}
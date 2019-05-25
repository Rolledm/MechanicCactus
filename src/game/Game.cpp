#include "Game.h"
#include "../map/MapArray.h"
#include "../map/MapRenderer.h"
#include "../main_menu/MainMenuRenderer.h"

namespace Game {
    
    Game::Game() {
        windowDispatcher = new WindowDispatcher();
    }

    Game::~Game() {
        delete windowDispatcher;
    }

    void Game::start() {
        windowDispatcher->startDispatch();
    }

}
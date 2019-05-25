#include <iostream>
#include <SFML/Graphics.hpp>

#include "src/map/Entity.h"
#include "src/map/MapArray.h"
#include "src/tools/Logger.h"

#include "src/map/MapRenderer.h"

#include "src/aux/defines.h"
#include "src/game/Game.h"

int main() {

    Game::Game game;
    game.start();

    return 0;
}
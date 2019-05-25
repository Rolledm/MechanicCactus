#ifndef GAME_H
#define GAME_H

#include "WindowDispatcher.h"

namespace Game {

    class Game {
    public:
        // TODO: init game settings by XML
        Game();
        ~Game();

        void start();

    private:
        WindowDispatcher* windowDispatcher;
    };

}

#endif
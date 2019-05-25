#ifndef WINDOWDISPATCHER_H
#define WINDOWDISPATCHER_H

#include "SFML/Graphics.hpp"
#include "../aux/DispatcherReturnCodes.h"
#include "../tools/Renderer.h"
#include "../main_menu/MainMenuEventHandler.h"

namespace Game {

    class WindowDispatcher {
    public:
        WindowDispatcher();
        ~WindowDispatcher();
        void startDispatch();
        void handleEvent(sf::Event event);
    private:
        sf::RenderWindow* window;
        Tools::Renderer* renderer;
        EventHandler* eventHandler;
    };

}

#endif
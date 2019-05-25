#ifndef MAINMENUEVENTHANDLER_H
#define MAINMENUEVENTHANDLER_H

#include "../game/EventHandler.h"

namespace MainMenu {

    class MainMenuEventHandler : public Game::EventHandler {
    public:
        virtual AUX::DispatcherReturnCodes handleEvent(sf::Event event) override;
    };

}

#endif
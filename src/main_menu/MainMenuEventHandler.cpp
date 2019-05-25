#include "MainMenuEventHandler.h"

namespace MainMenu {

    AUX::DispatcherReturnCodes MainMenuEventHandler::handleEvent(sf::Event event) {
        if (event.type == sf::Event::KeyPressed) {
            if (event.key.code == sf::Keyboard::Enter) {
                return AUX::DispatcherReturnCodes::GO_MAP;
            }
        }
        return AUX::DispatcherReturnCodes::OK;
    }

}
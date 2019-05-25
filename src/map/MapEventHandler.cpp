#include "MapEventHandler.h"

namespace Map {

    AUX::DispatcherReturnCodes MapEventHandler::handleEvent(sf::Event event) {
        if (event.type == sf::Event::KeyPressed) {
            if (event.key.code == sf::Keyboard::Escape) {
                return AUX::DispatcherReturnCodes::GO_MENU;
            }
        }
        return AUX::DispatcherReturnCodes::OK;
    }

}
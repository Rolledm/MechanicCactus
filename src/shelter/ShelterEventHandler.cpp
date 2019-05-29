#include "ShelterEventHandler.h"

namespace Shelter {

    AUX::DispatcherReturnCodes ShelterEventHandler::handleEvent(sf::Event event) {
        if (event.type == sf::Event::KeyPressed) {
            if (event.key.code == sf::Keyboard::BackSpace) {
                return AUX::DispatcherReturnCodes::GO_MAP;
            }
        }
        return AUX::DispatcherReturnCodes::OK;
    }

}
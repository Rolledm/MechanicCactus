#include "MapEventHandler.h"

namespace Map {

    MapEventHandler::MapEventHandler(MapArray* mapArray) : mapArray(mapArray) {}

    AUX::DispatcherReturnCodes MapEventHandler::handleEvent(sf::Event event) {
        if (event.type == sf::Event::KeyReleased) {
            int rc = 0;
            switch(event.key.code) {
                case sf::Keyboard::Escape:
                    return AUX::DispatcherReturnCodes::GO_MENU;
                
                case sf::Keyboard::W:
                    rc = mapArray->movePlayer(0, -1);
                    break;

                case sf::Keyboard::S:
                    rc = mapArray->movePlayer(0, 1);
                    break;

                case sf::Keyboard::D:
                    rc = mapArray->movePlayer(1, 0);
                    break;

                case sf::Keyboard::A:
                    rc = mapArray->movePlayer(-1, 0);
                    break;

                default:
                    break;
            }
            if (rc == 1) {
                return AUX::DispatcherReturnCodes::GO_SHELTER;
            }
        }
        return AUX::DispatcherReturnCodes::OK;
    }

}
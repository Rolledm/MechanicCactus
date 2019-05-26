#include "MapEventHandler.h"

namespace Map {

    MapEventHandler::MapEventHandler(MapArray* mapArray) : mapArray(mapArray) {}

    AUX::DispatcherReturnCodes MapEventHandler::handleEvent(sf::Event event) {
        if (event.type == sf::Event::KeyReleased) {
            switch(event.key.code) {
                case sf::Keyboard::Escape:
                    return AUX::DispatcherReturnCodes::GO_MENU;
                
                case sf::Keyboard::W:
                    mapArray->movePlayer(0, -1);
                    break;

                case sf::Keyboard::S:
                    mapArray->movePlayer(0, 1);
                    break;

                case sf::Keyboard::D:
                    mapArray->movePlayer(1, 0);
                    break;

                case sf::Keyboard::A:
                    mapArray->movePlayer(-1, 0);
                    break;

                default:
                    break;
            }
        }
        return AUX::DispatcherReturnCodes::OK;
    }

}
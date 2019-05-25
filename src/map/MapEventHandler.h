#ifndef MAPEVENTHANDLER_H
#define MAPEVENTHANDLER_H

#include "../game/EventHandler.h"

namespace Map {

    class MapEventHandler : public Game::EventHandler {
    public:
        virtual AUX::DispatcherReturnCodes handleEvent(sf::Event event) override;
    };

}

#endif
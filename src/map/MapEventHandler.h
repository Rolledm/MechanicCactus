#ifndef MAPEVENTHANDLER_H
#define MAPEVENTHANDLER_H

#include "../game/EventHandler.h"
#include "MapArray.h"

namespace Map {

    class MapEventHandler : public Game::EventHandler {
    public:
        MapEventHandler(MapArray* mapArray);
        virtual AUX::DispatcherReturnCodes handleEvent(sf::Event event) override;
    private:
        MapArray* mapArray;
    };

}

#endif
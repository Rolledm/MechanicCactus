#ifndef SHELTEREVENTHANDLER_H
#define SHELTEREVENTHANDLER_H

#include "../game/EventHandler.h"

namespace Shelter {

    class ShelterEventHandler : public Game::EventHandler {
    public:
        virtual AUX::DispatcherReturnCodes handleEvent(sf::Event event) override;
    };

}

#endif
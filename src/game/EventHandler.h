#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H

#include "../aux/DispatcherReturnCodes.h"
#include <SFML/Graphics.hpp>

namespace Game {

    class EventHandler {
    public:
        virtual AUX::DispatcherReturnCodes handleEvent(sf::Event event) = 0;
    };

}

#endif
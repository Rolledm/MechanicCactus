#ifndef EVENTDISPATCHER_H
#define EVENTDISPATCHER_H

#include "SFML/Graphics.hpp"

namespace Game {

    class EventDispatcher {
    public:
        void handleEvent(sf::RenderWindow* window, sf::Event event);
    };

}

#endif
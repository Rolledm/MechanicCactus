#include "EventDispatcher.h"

namespace Game {

    void EventDispatcher::handleEvent(sf::RenderWindow* window, sf::Event event) {
        if (event.type == sf::Event::Closed)
                    window->close();
    }

}
#ifndef RENDERER_H
#define RENDERER_H

#include <SFML/Graphics.hpp>

namespace Tools {

    class Renderer {
    public:
        virtual void renderScreen(sf::RenderWindow* window) = 0;
    };


}

#endif
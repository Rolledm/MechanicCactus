#ifndef MAPRENDERER_H
#define MAPRENDERER_H

#include "../tools/Renderer.h"
#include "MapArray.h"

namespace Map {

    class MapRenderer : public Tools::Renderer {
    public:
        MapRenderer(MapArray* mapArray);
        virtual void renderScreen(sf::RenderWindow* window) override;
    private:
        MapArray* mapArray;
    };

}

#endif
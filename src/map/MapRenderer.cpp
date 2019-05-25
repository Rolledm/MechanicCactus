#include "MapRenderer.h"

namespace Map {

    MapRenderer::MapRenderer(MapArray* mapArray) : mapArray(mapArray) {}

    void MapRenderer::renderScreen(sf::RenderWindow* window) {
        sf::Sprite sprite;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 7; j++) {
                sprite.setTexture(*mapArray->getNode(j,i)->getPathNode()->getTexture()->getTexture());
                window->draw(sprite);
                sprite.move(33, 0);
            }
            sprite.setPosition(0, sprite.getPosition().y + 33);
        }
    }

}
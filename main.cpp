#include <iostream>
#include <SFML/Graphics.hpp>

#include "src/map/Entity.h"
#include "src/map/MapArray.h"
#include "src/tools/Logger.h"


int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Mechanic Cactus");
    
    Map::MapArray a1("res/maps/map1.mcm", 7, 6);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        sf::Sprite sprite;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 7; j++) {
                sprite.setTexture(*a1.getNode(j,i)->getPathNode()->getTexture()->getTexture());
                window.draw(sprite);
                sprite.move(33, 0);
            }
            sprite.setPosition(0, sprite.getPosition().y + 33);
        }
        
        window.display();
    }


    return 0;
}
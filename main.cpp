#include <iostream>
#include <SFML/Graphics.hpp>

#include "src/map/Entity.h"
#include "src/map/MapArray.h"


int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Mechanic Cactus");
    
    Fundamental::Texture texture1("res/bee.png");
    Map::Entity ent1;
    ent1.setTexture(&texture1);
    
    sf::Sprite sprite;
    sprite.setTexture(*ent1.getTexture()->getTexture());

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        
        window.draw(sprite);
        window.display();
    }


    return 0;
}
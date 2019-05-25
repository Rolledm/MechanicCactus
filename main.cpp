#include <iostream>
#include <SFML/Graphics.hpp>

#include "src/map/Entity.h"
#include "src/map/MapArray.h"
#include "src/tools/Logger.h"

#include "src/map/MapRenderer.h"

#include "src/aux/defines.h"


int main() {
    sf::RenderWindow window(sf::VideoMode(1366, 768), "Mechanic Cactus");
    
    Map::MapArray a1("res/maps/map1.mcm", 7, 6);
    Tools::Renderer* mr = new Map::MapRenderer(&a1);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        mr->renderScreen(&window);
        
        window.display();
    }


    return 0;
}
#include "WindowDispatcher.h"

#include "../map/MapArray.h"
#include "../map/MapRenderer.h"
#include "../main_menu/MainMenuRenderer.h"

#include <iostream>

namespace Game {

    WindowDispatcher::WindowDispatcher() {
        window = new sf::RenderWindow(sf::VideoMode(1366, 768), "Mechanic");
        renderer = new MainMenu::MainMenuRenderer();
        eventHandler = new MainMenu::MainMenuEventHandler();
    }

    WindowDispatcher::~WindowDispatcher() {
        delete window;
    }

    void WindowDispatcher::startDispatch() {
        while (window->isOpen())
        {
            sf::Event event;
            while (window->pollEvent(event))
            {
                handleEvent(event);
            }

            window->clear();

            renderer->renderScreen(window);
            
            window->display();
        }
    }

    void WindowDispatcher::handleEvent(sf::Event event) {
        AUX::DispatcherReturnCodes returnCode = AUX::DispatcherReturnCodes::OK;
        if (event.type == sf::Event::Closed) {
            window->close();
        }
        else {
            returnCode = eventHandler->handleEvent(event);
        }

        if (returnCode == AUX::DispatcherReturnCodes::GO_MAP) {
            Map::MapArray* a1 = new Map::MapArray("res/maps/map1", 7, 6);
            renderer = new Map::MapRenderer(a1);
        }

        /*switch(returnCode) {
            case AUX::DispatcherReturnCodes::GO_MAP:
                
                break;
        }*/
        
    }

}
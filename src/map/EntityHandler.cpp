#include "EntityHandler.h"

#include <iostream>

namespace Map {

    int EntityHandler::ProcessEntity(Entity* entity) {
        switch (entity->getType()) {
            case EntityTypes::SimpleEnemy:
                std::cout << "Simple enemy" << std::endl;
                break;
            case EntityTypes::Shelter:
                std::cout << "Shelter" << std::endl;
                break;
            default:
                std::cout << "Unknown type" << std::endl;
                break;
        }
        return 0;
    }

}
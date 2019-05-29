#include "EntityHandler.h"

#include <iostream>

namespace Map {

    int EntityHandler::ProcessEntity(Entity* entity) {
        switch (entity->getType()) {
            case EntityTypes::SimpleEnemy:
                break;
            case EntityTypes::Shelter:
                return 1;
            default:
                std::cout << "Unknown type" << std::endl;
                break;
        }
        return 0;
    }

}
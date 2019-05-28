#ifndef ENTITYHANDLER_H
#define ENTITYHANDLER_H

#include "Entity.h"

namespace Map {

    class EntityHandler {
    private:
        EntityHandler() {}
        EntityHandler(const EntityHandler&);
        EntityHandler& operator=(EntityHandler&);

    public:
        int ProcessEntity(Entity* entity);

        static EntityHandler& getInstance() {
            static EntityHandler instance;
            return instance;
        }
    };

}

#endif
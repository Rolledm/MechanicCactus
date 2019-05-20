#ifndef NODE_H
#define NODE_H

#include "Entity.h"
#include "PathNode.h"

namespace Map {

    class Node {
    public:
        Node(PathNode* pathNode);
        
        void setEntity(Entity* entity);
        
        Entity* getEntity();
        PathNode* getPathNode();
    private:
        Entity* entity = nullptr;
        PathNode* pathNode;
    };

}

#endif 
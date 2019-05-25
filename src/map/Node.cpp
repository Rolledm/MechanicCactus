#include "Node.h"
#include <iostream>

namespace Map {
    
    Node::Node(PathNode* pathNode) : pathNode(pathNode) {}

    void Node::setEntity(Entity* entity) {
        this->entity = entity;
    }

    Entity* Node::getEntity() {
        return entity;
    }

    PathNode* Node::getPathNode() {
        return pathNode;
    }

}
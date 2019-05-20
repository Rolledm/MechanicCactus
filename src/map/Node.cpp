#include "Node.h"

namespace Map {
    
    Node::Node(PathNode* pathNode) : pathNode(pathNode) {}

    void Node::setEntity(Entity* entity) {
        this->entity = entity;
    }

    Entity* Node::getEntity() {
        return getEntity();
    }

    PathNode* Node::getPathNode() {
        return pathNode;
    }

}
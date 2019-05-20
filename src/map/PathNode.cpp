#include "PathNode.h"

namespace Map {

    PathNode::PathNode(Fundamental::Texture* texture, int neededStamina) : texture(texture), neededStamina(neededStamina) {}

    Fundamental::Texture* PathNode::getTexture() {
        return texture;
    }

    int PathNode::getNeededStamina() {
        return neededStamina;
    }

}
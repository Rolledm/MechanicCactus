#include "Entity.h"

namespace Map {

    Fundamental::Texture* Entity::getTexture() {
        return texture;
    }

    void Entity::setTexture(Fundamental::Texture* texture) {
        this->texture = texture;
    }
    
}
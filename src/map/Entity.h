#ifndef ENTITY_H
#define ENTITY_H

#include "../fundamental/Texture.h"
#include "EntityTypes.h"

namespace Map{

    class Entity {
    public:
        Fundamental::Texture* getTexture();
        void setTexture(Fundamental::Texture* texture);
        EntityTypes getType();
    private:
        Fundamental::Texture* texture;
    protected:
        EntityTypes type;
    };

}
#endif
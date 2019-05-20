#ifndef ENTITY_H
#define ENTITY_H

#include "../fundamental/Texture.h"

namespace Map{

    class Entity {
    public:
        Fundamental::Texture* getTexture();
        void setTexture(Fundamental::Texture* texture);
    private:
        Fundamental::Texture* texture;
    };

}
#endif
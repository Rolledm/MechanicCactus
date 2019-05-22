#ifndef TEXTURETYPESDISTRIBUTOR_H
#define TEXTURETYPESDISTRIBUTOR_H

#include "TextureTypes.h"

namespace Map {

    class TextureTypesDistributor {
    private:
        TextureTypesDistributor() {}
        TextureTypesDistributor(const TextureTypesDistributor&);
        TextureTypesDistributor& operator=(TextureTypesDistributor&);
    public:
        TextureTypes getType(char symbol);
        static TextureTypesDistributor& getInstance() {
            static TextureTypesDistributor instance;
            return instance;
        }
    };

}

#endif
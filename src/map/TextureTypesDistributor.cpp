#include "TextureTypesDistributor.h"

#include <iostream>

namespace Map {

    TextureTypes TextureTypesDistributor::getType(char symbol) {
        switch (symbol)
        {
        case 'g':
            return TextureTypes::Grass;

        case 'w':
            return TextureTypes::Water;

        case 'b':
            return TextureTypes::Bee;
        
        default:
            return TextureTypes::Grass; // TODO: add smth like TextureTypes::Null.
        }
    }

}
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
        
        default:
            return TextureTypes::Grass; // TODO: add smth like TextureTypes::Null.
        }
    }

}
#include "TextureHolder.h"

namespace Map {

    Fundamental::Texture* TextureHolder::getTexture(TextureTypes type) {
        auto iterator = textureContainer.find(type);
        if (iterator != textureContainer.end()) {     
            return iterator->second;
        }
        loadTexture(type, getPathOfTexture(type));
        return textureContainer[type];
    }

    void TextureHolder::loadTexture(TextureTypes type, std::string path){
        Fundamental::Texture* texture = new Fundamental::Texture(path);
        textureContainer[type] = texture;
    }

    std::string TextureHolder::getPathOfTexture(TextureTypes type) {
        std::string path = "res/";
        switch (type)
        {
        case TextureTypes::Grass:
            path += "grass";
            break;
        
        case TextureTypes::Water:
            path += "water";
            break;

        case TextureTypes::Bee:
            path += "bee";
            break;

        case TextureTypes::Player:
            path += "player";
            break;

        case TextureTypes::Shelter:
            path += "shelter";
        
        default:
            break;
        }
        path += ".png";
        return path;
    }

}
#ifndef TEXTUREHOLDER_H
#define TEXTUREHOLDER_H

#include "../fundamental/Texture.h"
#include "TextureTypes.h"

#include <map>
#include <iostream>

namespace Map {

    class TextureHolder {
    private:
        TextureHolder() {}
        TextureHolder(const TextureHolder&);
        TextureHolder& operator=(TextureHolder&);
    public:
        static TextureHolder& getInstance() {
            static TextureHolder instance;
            return instance;
        }

        Fundamental::Texture* getTexture(TextureTypes type);
        void loadTexture(TextureTypes, std::string path);
        std::string getPathOfTexture(TextureTypes type);
    private:
        std::map<TextureTypes, Fundamental::Texture*> textureContainer;
    };

}

#endif
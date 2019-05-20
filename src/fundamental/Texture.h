#ifndef TEXTURE_H
#define TEXTURE_H

#include <SFML/Graphics.hpp>

namespace Fundamental {

    /* For now, there is only SFML textures
       Other way to work w/ graphics: TBD */
    class Texture {
    public:
        Texture(std::string path);
        ~Texture();
        sf::Texture* getTexture();
        void loadTexture(std::string path);
    private:
        sf::Texture* texture = nullptr;
    };

}

#endif
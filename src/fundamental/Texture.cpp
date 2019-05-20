#include "Texture.h"
#include <iostream>

namespace Fundamental {
    
    sf::Texture* Texture::getTexture() {
        return texture;
    }

    void Texture::loadTexture(std::string path) {
        if (texture == nullptr) texture = new sf::Texture();
        if (!texture->loadFromFile(path)) std::cout << "Err w/ loading" << std::endl; else std::cout << "Good" << std::endl;
    }

    Texture::Texture(std::string path) {
        loadTexture(path);
    }

    Texture::~Texture() {
        std::cout << "Texture removed!" << std::endl;
        delete texture;
    }

}
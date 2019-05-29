#include "ShelterRenderer.h"

namespace Shelter {

    ShelterRenderer::ShelterRenderer() {
        font.loadFromFile("res/fonts/tahoma.ttf");
    }

    void ShelterRenderer::renderScreen(sf::RenderWindow* window) {
        sf::Text text;
        text.setString("You are in the castle");
        text.setFont(font);
        text.setFillColor(sf::Color::Blue);
        text.setPosition(550, 400);
        window->draw(text);
    }

}
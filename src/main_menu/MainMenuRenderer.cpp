#include "MainMenuRenderer.h"

namespace MainMenu {

    MainMenuRenderer::MainMenuRenderer() {
        font.loadFromFile("res/fonts/tahoma.ttf");
    }

    void MainMenuRenderer::renderScreen(sf::RenderWindow* window) {
        sf::Text text;
        text.setString("Press Enter to start");
        text.setFont(font);
        text.setFillColor(sf::Color::Blue);
        text.setPosition(550, 400);
        window->draw(text);
    }

}
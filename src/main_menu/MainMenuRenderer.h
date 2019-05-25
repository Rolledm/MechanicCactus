#ifndef MAINMENURENDERER_H
#define MAINMENURENDERER_H

#include "../tools/Renderer.h"

namespace MainMenu {

    class MainMenuRenderer : public Tools::Renderer {
    public:
        MainMenuRenderer();
        virtual void renderScreen(sf::RenderWindow* window) override;
    private:
        sf::Font font;
    };

}

#endif
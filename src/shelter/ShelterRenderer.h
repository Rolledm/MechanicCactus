#ifndef SHELTER_RENDERER
#define SHELTER_RENDERER

#include "../tools/Renderer.h"

namespace Shelter {

    class ShelterRenderer : public Tools::Renderer {
    public:
        ShelterRenderer();
        virtual void renderScreen(sf::RenderWindow* window) override;
    private:
        sf::Font font;
    };

}

#endif
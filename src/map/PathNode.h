#ifndef PATHNODE_H
#define PATHNODE_H

#include "../fundamental/Texture.h"

namespace Map {

    class PathNode {
    public:
        PathNode(Fundamental::Texture* texture, int neededStamina);
        
        Fundamental::Texture* getTexture();
        int getNeededStamina();
    private:
        Fundamental::Texture* texture;
        int neededStamina;
    };

}

#endif
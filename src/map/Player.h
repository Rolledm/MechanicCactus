#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"

namespace Map {

    class Player : public Entity {
    public:
        Player(int x, int y);
        void setPosition(int x, int y);
        int getX();
        int getY();
    private:
        int x;
        int y;
    };

}

#endif
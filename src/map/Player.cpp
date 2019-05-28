#include "Player.h"

namespace Map {

    Player::Player(int x, int y) {
        setPosition(x, y);
        type = EntityTypes::Hero;
    }

    void Player::setPosition(int x, int y) {
        this->x = x;
        this->y = y;
    }

    int Player::getX() {
        return x;
    }

    int Player::getY() {
        return y;
    }

}
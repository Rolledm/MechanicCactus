#ifndef MAPARRAY_H
#define MAPARRAY_H

#include "Node.h"
#include "Player.h"
#include <vector>

namespace Map {

    class MapArray {
    public:
        MapArray(int MAX_X, int MAX_Y);
        MapArray(std::string filename, int MAX_X, int MAX_Y);

        Node* getNode(int x, int y);

        int movePlayer(int x, int y);
    private:
        const int MAX_X, MAX_Y;
        Node*** array;
        Player* player;
    };

}

#endif
#ifndef MAPARRAY_H
#define MAPARRAY_H

#include "Node.h"
#include <vector>

namespace Map {

    class MapArray {
    public:
        MapArray(int MAX_X, int MAX_Y);

        Node* getNode(int x, int y);
    private:
        const int MAX_X, MAX_Y;
        Node*** array;
    };

}

#endif
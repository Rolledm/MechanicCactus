#include "MapArray.h"

namespace Map {

    MapArray::MapArray(int MAX_X, int MAX_Y) : MAX_X(MAX_X), MAX_Y(MAX_Y) {
        Fundamental::Texture* texture = new Fundamental::Texture("res/grass.png");
        PathNode* pn = new PathNode(texture, 10);
        array = new Node**[MAX_Y];
        for (int i = 0; i < MAX_Y; i++) {
            array[i] = new Node*[MAX_X];
        }
        for (int i = 0; i < MAX_Y; i++) {
            for (int j = 0; j < MAX_X; j++) {
                array[i][j] = new Node(pn);
            }
        }
    }

    Node* MapArray::getNode(int x, int y) {
        return array[y][x];
    }

}
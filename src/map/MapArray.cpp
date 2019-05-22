#include "MapArray.h"

#include <fstream>
#include <iostream>

#include "TextureHolder.h"
#include "TextureTypesDistributor.h"

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

    MapArray::MapArray(std::string filename, int MAX_X, int MAX_Y) : MAX_X(MAX_X), MAX_Y(MAX_Y) {
        std::ifstream mapFile(filename);
        std::string line;
        if (mapFile.is_open()) {
            array = new Node**[MAX_Y];
            for (int i = 0; i < MAX_Y; i++) {
                array[i] = new Node*[MAX_X];
            }

            int i = 0;
            while(getline(mapFile,line)) {
                for (int j = 0; j < MAX_X; j++) {
                    Fundamental::Texture* texture = TextureHolder::getInstance().getTexture(TextureTypesDistributor::getInstance().getType(line[j]));
                    PathNode* pn = new PathNode(texture, 10); // TODO: Factory to pathnodes, same as for textures.
                    array[i][j] = new Node(pn);
                }
                i++;
            }
            mapFile.close();
        }
    }

    Node* MapArray::getNode(int x, int y) {
        return array[y][x];
    }

}
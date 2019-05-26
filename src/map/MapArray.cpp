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
        array = new Node**[MAX_Y];
            for (int i = 0; i < MAX_Y; i++) {
                array[i] = new Node*[MAX_X];
            }
        
        // TODO: divide loading the map to functions
        std::ifstream mapFile(filename + ".mcm");
        std::string line;
        if (mapFile.is_open()) {
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

        std::ifstream mapFile1(filename + "_e.mcm");
        if (mapFile1.is_open()) {
            int i = 0;
            while(getline(mapFile1,line)) {
                for (int j = 0; j < MAX_X; j++) {
                    if (line[j] != '.') {
                        Fundamental::Texture* texture = TextureHolder::getInstance().getTexture(TextureTypesDistributor::getInstance().getType(line[j]));
                        Entity* entity = new Entity();
                        entity->setTexture(texture);
                        array[i][j]->setEntity(entity);
                    }
                }
                i++;
            }
            mapFile1.close();
        }

        player = new Player(2, 3);
        Fundamental::Texture* playerTexture = TextureHolder::getInstance().getTexture(TextureTypesDistributor::getInstance().getType('P'));
        player->setTexture(playerTexture);
        array[3][2]->setEntity(player);
    }

    Node* MapArray::getNode(int x, int y) {
        return array[y][x];
    }

    void MapArray::movePlayer(int x, int y) {
        array[player->getY()][player->getX()]->setEntity(nullptr);
        player->setPosition(player->getX() + x, player->getY() + y);
        array[player->getY()][player->getX()]->setEntity(player);
    }

}
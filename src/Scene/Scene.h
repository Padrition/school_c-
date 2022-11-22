#ifndef SCENE_H
#define SCENE_H
#include "../Player/Player.h"
#include "../Map/Map.h"
class Scene{
    Player * player;
    map currentMap;
    bool checkPlayerMove(int x, int y);

    public:
    Scene();
    void setPlayer(Player * player);
    void movePlayerRight();
    void movePlayerLeft();
    void movePlayerUp();
    void movePlayerDown();
    void setMap(map m);
};
#endif
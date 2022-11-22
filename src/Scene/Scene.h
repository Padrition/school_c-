#ifndef SCENE_H
#define SCENE_H
#include "../Player/Player.h"
class Scene{
    Player * player;

    public:
    Scene();
    void setPlayer(Player * player);
    void movePlayerRight();
    void movePlayerLeft();
    void movePlayerUp();
    void movePlayerDown();
};
#endif
#ifndef MEDIATOR_H
#define MEDIATOR_H
#include "../Player/Player.h"
#include "../Scene/Scene.h"
#include "ftxui/component/component.hpp"
class Mediator{
    private:
    Player * player;
    Scene * scene;

    public:
    Mediator();
    void setPlayer(Player * player);
    void setScene(Scene * scene);
    Player* getPlayer();
    Scene* getScene();

};
#endif
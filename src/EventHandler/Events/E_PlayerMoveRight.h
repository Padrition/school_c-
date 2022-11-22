#ifndef E_PLAYERMOVERIGHT_H
#define E_PLAYERMOVERIGHT_H
#include "../EventHandlerLeaf.h"
#include "../../Player/Player.h"
class E_PlayerMoveRight: public EventHandlerLeaf{
    private:
    Player * player;

    public:
    E_PlayerMoveRight(Player * player);
    void handle();
};
#endif
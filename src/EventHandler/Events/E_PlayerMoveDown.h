#ifndef E_PLAYERMOVEDOWN_H
#define E_PLAYERMOVEDOWN_H
#include "../EventHandlerLeaf.h"
#include "../../Player/Player.h"
class E_PlayerMoveDown : public EventHandlerLeaf{
    private:
    Player * player;

    public:
    E_PlayerMoveDown(Player * player);
    void handle();
};
#endif
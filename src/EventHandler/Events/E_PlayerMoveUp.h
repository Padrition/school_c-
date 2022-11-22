#ifndef E_PLAYERMOVEUP_H
#define E_PLAYERMOVEUP_H
#include "../EventHandlerLeaf.h"
#include "../../Player/Player.h"
class E_PlayerMoveUp : public EventHandlerLeaf{
    private:
    Player * player;

    public:
    E_PlayerMoveUp(Player * player);
    void handle();
};
#endif
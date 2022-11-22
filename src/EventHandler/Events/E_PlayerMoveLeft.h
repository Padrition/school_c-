#ifndef E_PLAYERMOVELEFT_H
#define E_PLAYERMOVELEFT_H
#include "../EventHandlerLeaf.h"
#include "../../Player/Player.h"
class E_PlayerMoveLeft : public EventHandlerLeaf{
    private:
    Player * player;

    public:
    E_PlayerMoveLeft(Player * player);
    void handle();

};
#endif
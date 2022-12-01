#ifndef E_PLAYERMOVEDOWN_H
#define E_PLAYERMOVEDOWN_H
#include "../EventHandlerLeaf.h"
#include "E_PlayerMove.h"
class E_PlayerMoveDown : public EventHandlerLeaf, public E_PlayerMove{
    public:
    E_PlayerMoveDown();
    void handle();
};
#endif
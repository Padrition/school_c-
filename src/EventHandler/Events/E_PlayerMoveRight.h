#ifndef E_PLAYERMOVERIGHT_H
#define E_PLAYERMOVERIGHT_H
#include "../EventHandlerLeaf.h"
#include "E_PlayerMove.h"
class E_PlayerMoveRight: public EventHandlerLeaf, public E_PlayerMove{
    public:
    E_PlayerMoveRight(Character * player);
    void handle();
};
#endif
#ifndef E_PLAYERMOVEUP_H
#define E_PLAYERMOVEUP_H
#include "../EventHandlerLeaf.h"
#include "E_PlayerMove.h"
class E_PlayerMoveUp : public EventHandlerLeaf, public E_PlayerMove{
    public:
    E_PlayerMoveUp();
    void handle();
};
#endif
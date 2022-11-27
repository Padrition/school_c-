#ifndef E_PLAYERMOVELEFT_H
#define E_PLAYERMOVELEFT_H
#include "../EventHandlerLeaf.h"
#include "E_PlayerMove.h"
class E_PlayerMoveLeft : public EventHandlerLeaf, public E_PlayerMove{
    public:
    E_PlayerMoveLeft(Mediator * mediator);
    void handle();

};
#endif
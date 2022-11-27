#include "E_PlayerMoveRight.h"
using namespace ftxui;

E_PlayerMoveRight::E_PlayerMoveRight(Mediator * medaitor){
    m_eventSignature = Event::Character(M_RIGHT);
    this->m_mediator = medaitor;
}

void E_PlayerMoveRight::handle(){

}
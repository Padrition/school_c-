#include "E_PlayerMoveLeft.h"
using namespace ftxui;

E_PlayerMoveLeft::E_PlayerMoveLeft(Mediator * mediator){
    m_eventSignature = Event::Character(M_LEFT);
    this->m_mediator = mediator;
}

void E_PlayerMoveLeft::handle(){

}
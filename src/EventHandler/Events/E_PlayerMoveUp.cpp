#include "E_PlayerMoveUp.h"
using namespace ftxui;

E_PlayerMoveUp::E_PlayerMoveUp(Mediator * mediator){
    m_eventSignature = Event::Character(M_UP);
    this->m_mediator = mediator;
}

void E_PlayerMoveUp::handle(){

}
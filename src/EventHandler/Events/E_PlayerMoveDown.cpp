#include "E_PlayerMoveDown.h"
using namespace ftxui;
E_PlayerMoveDown::E_PlayerMoveDown(Mediator * mediator){
    m_eventSignature = Event::Character(M_DOWN);
    this->m_mediator = mediator;
}

void E_PlayerMoveDown::handle(){

}
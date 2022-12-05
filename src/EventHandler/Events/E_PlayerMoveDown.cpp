#include "E_PlayerMoveDown.h"
using namespace ftxui;
E_PlayerMoveDown::E_PlayerMoveDown(Character * player){
    m_eventSignature = Event::Character(M_DOWN);
    this->_player = player;
}

void E_PlayerMoveDown::handle(){
}
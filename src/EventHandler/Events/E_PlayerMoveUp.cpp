#include "E_PlayerMoveUp.h"
using namespace ftxui;

E_PlayerMoveUp::E_PlayerMoveUp(Character * player){
    m_eventSignature = Event::Character(M_UP);
    this->_player = player;
}

void E_PlayerMoveUp::handle(){
    this->_player->move(0,1);
}
#include "E_PlayerMoveLeft.h"
using namespace ftxui;

E_PlayerMoveLeft::E_PlayerMoveLeft(Character * player){
    m_eventSignature = Event::Character(M_LEFT);
    this->_player = player;
}

void E_PlayerMoveLeft::handle(){

}
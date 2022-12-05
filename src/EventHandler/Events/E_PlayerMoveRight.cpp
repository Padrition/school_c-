#include "E_PlayerMoveRight.h"
using namespace ftxui;

E_PlayerMoveRight::E_PlayerMoveRight(Character * player){
    m_eventSignature = Event::Character(M_RIGHT);
    this->_player = player;
}

void E_PlayerMoveRight::handle(){

}
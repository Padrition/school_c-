#include "E_PlayerMoveLeft.h"
using namespace ftxui;

E_PlayerMoveLeft::E_PlayerMoveLeft(Scene * scene){
    eventSignature = Event::Character(M_LEFT);
    this->scene = scene;
}

void E_PlayerMoveLeft::handle(){
    this->scene->movePlayerLeft();
}
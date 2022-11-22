#include "E_PlayerMoveRight.h"
using namespace ftxui;

E_PlayerMoveRight::E_PlayerMoveRight(Scene * scene){
    eventSignature = Event::Character(M_RIGHT);
    this->scene = scene;
}

void E_PlayerMoveRight::handle(){
    this->scene->movePlayerRight();
}
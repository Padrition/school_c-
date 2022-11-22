#include "E_PlayerMoveUp.h"
using namespace ftxui;

E_PlayerMoveUp::E_PlayerMoveUp(Scene * scene){
    eventSignature = Event::Character(M_UP);
    this->scene = scene;
}

void E_PlayerMoveUp::handle(){
    this->scene->movePlayerUp();
}
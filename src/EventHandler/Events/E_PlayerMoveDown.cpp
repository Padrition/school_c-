#include "E_PlayerMoveDown.h"
using namespace ftxui;
E_PlayerMoveDown::E_PlayerMoveDown(Scene * scene){
    eventSignature = Event::Character(M_DOWN);
    this->scene = scene;
}

void E_PlayerMoveDown::handle(){
    this->scene->movePlayerDown();
}
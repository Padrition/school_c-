#include "E_PlayerMoveDown.h"
using namespace ftxui;
E_PlayerMoveDown::E_PlayerMoveDown(Player * player){
    eventSignature = Event::Character(M_DOWN);
    this->player = player;
}

void E_PlayerMoveDown::handle(){
    auto coords = this->player->getPlayerCoords();
    coords.y -= 1;
    this->player->setPlayerCoords(coords.x, coords.y);
}
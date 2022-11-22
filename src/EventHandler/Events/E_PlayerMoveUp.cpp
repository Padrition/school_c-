#include "E_PlayerMoveUp.h"
using namespace ftxui;

E_PlayerMoveUp::E_PlayerMoveUp(Player * player){
    eventSignature = Event::Character(M_UP);
    this->player = player;
}

void E_PlayerMoveUp::handle(){
    auto coords = this->player->getPlayerCoords();
    coords.y += 1;
    this->player->setPlayerCoords(coords.x, coords.y);
}
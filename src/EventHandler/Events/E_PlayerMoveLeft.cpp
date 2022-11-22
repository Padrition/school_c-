#include "E_PlayerMoveLeft.h"
using namespace ftxui;

E_PlayerMoveLeft::E_PlayerMoveLeft(Player * player){
    eventSignature = Event::Character(M_LEFT);
    this->player = player;
}

void E_PlayerMoveLeft::handle(){
    auto playerCoords = this->player->getPlayerCoords();
    playerCoords.x -= 1;
    this->player->setPlayerCoords(playerCoords.x, playerCoords.y);
}
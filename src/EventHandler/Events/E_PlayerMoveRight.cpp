#include "E_PlayerMoveRight.h"
using namespace ftxui;

E_PlayerMoveRight::E_PlayerMoveRight(Player * player){
    eventSignature = Event::Character(M_RIGHT);
    this->player = player;
}

void E_PlayerMoveRight::handle(){
    auto playerCoords = this->player->getPlayerCoords();
    playerCoords.x += 1;
    this->player->setPlayerCoords(playerCoords.x, playerCoords.y);
}
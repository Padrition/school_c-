#include "Player.h"

Player::Player(int x, int y){
    setPlayerCoords(x, y);
}

Coords Player::getPlayerCoords(){
    return coords;
}

void Player::setPlayerCoords(int x, int y){
    coords.x = x;
    coords.y = y;
}

std::string Player::coordsToString(){
    return "Player x:" + std::to_string(coords.x) + " Player y:" + std::to_string(coords.y) ;
}

void Player::setMediator(Mediator *mediator) {
    this->m_mediator = mediator;
}

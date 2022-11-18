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

void Player::parseEvent(){
    //TODO
}
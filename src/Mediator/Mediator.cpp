#include "Mediator.h"

Mediator::Mediator(){}

void Mediator::setPlayer(Player * player){
    this->player = player;
}
void Mediator::setScene(Scene * scene){
    this->scene = scene;
}

Player* Mediator::getPlayer(){
    return this->player;
}

Scene* Mediator::getScene(){
    return this->scene;
}
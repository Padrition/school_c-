//
// Created by padrition on 12/1/22.
//

#include "Character.h"

Character::Character(CharacterState *state) : _state(nullptr){
    this->_state = state;
    this->_position = {0,0};
}

Character::~Character() {
    delete this->_state;
}

void Character::transitionTo(CharacterState *state) {
    delete this->_state;
    this->_state = state;
    this->_state->setCharacter(this);
}

void Character::fight(Character *character) {
    this->_state->fight(character);
}

void Character::move(int horizontal, int vertical) {
    this->_state->move(horizontal, vertical);
}

void Character::setPosition(int horizontal, int vertival) {
    this->_position = {horizontal, vertival};
}

Coords Character::getPosition() {
    return this->_position;
}

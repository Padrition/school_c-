//
// Created by padrition on 12/1/22.
//

#include "Hero.h"

void Hero::fight(Character *character) {

}

void Hero::move(int horizontal, int vertical) {
    Coords c = this->_character->getPosition();
    int x = c.x + horizontal;
    int y = c.y + vertical;
    this->_character->setPosition(x, y);
}

//
// Created by padrition on 12/1/22.
//

#ifndef ZOOHRA_CHARACTERSTATE_H
#define ZOOHRA_CHARACTERSTATE_H

class Character;
#include "Character.h"

class CharacterState {
protected:
    Character* _character;

public:
    void setCharacter(Character* character);
    virtual void fight(Character* character) = 0;
    virtual void move(int horizontal, int vertical) = 0;
};


#endif //ZOOHRA_CHARACTERSTATE_H

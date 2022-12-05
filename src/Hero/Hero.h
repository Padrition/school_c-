//
// Created by padrition on 12/1/22.
//

#ifndef ZOOHRA_HERO_H
#define ZOOHRA_HERO_H


#include "../Character/CharacterState.h"

class Hero : public CharacterState{
public:
    void fight(Character *character) override;

    void move(int horizontal, int vertical) override;
};


#endif //ZOOHRA_HERO_H

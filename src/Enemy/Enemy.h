//
// Created by padrition on 12/6/22.
//

#ifndef ZOOHRA_ENEMY_H
#define ZOOHRA_ENEMY_H


#include "../Character/CharacterState.h"

class Enemy : public CharacterState{
public:
    void fight(Character *character) override;

    void move(int horizontal, int vertical) override;
};


#endif //ZOOHRA_ENEMY_H

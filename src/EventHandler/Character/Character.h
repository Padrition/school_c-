//
// Created by padrition on 12/1/22.
//

#ifndef ZOOHRA_CHARACTER_H
#define ZOOHRA_CHARACTER_H

class CharacterState;
#include "CharacterState.h"

struct Coords{
    int x;
    int y;
};

class Character {
private:
    CharacterState* _state;
    Coords _position;
public:
    Character(CharacterState* state);
    ~Character();
    void transitionTo(CharacterState* state);
    void fight(Character* character);
    void move(int horizontal, int vertical);
    void setPosition(int horizontal, int vertival);
    Coords getPosition();
};


#endif //ZOOHRA_CHARACTER_H

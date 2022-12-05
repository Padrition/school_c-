#ifndef E_PLAYERMOVE_H
#define E_PLAYERMOVE_H

#include "../../Character/Character.h"

class E_PlayerMove{
    protected:
    const char M_RIGHT = 'd';
    const char M_LEFT = 'a';
    const char M_UP = 'w';
    const char M_DOWN = 's';
    Character * _player;
};
#endif
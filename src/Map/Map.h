//
// Created by padrition on 12/6/22.
//

#ifndef ZOOHRA_MAP_H
#define ZOOHRA_MAP_H

#include "../Character/Character.h"
#include "vector"

enum MapBlock{
    Wall,
    Door,
    Empty,
};

class Map {
protected:
    std::vector<std::vector<MapBlock>> _map;
    std::vector<Character *> _enemies;
    Character * _player;
public:
    std::vector<Character*> getEnemies();
};


#endif //ZOOHRA_MAP_H

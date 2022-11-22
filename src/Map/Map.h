#ifndef MAP_H
#define MAP_H

#include <vector>

typedef enum mapEntity{WALL, ____}mapEntity;

typedef std::vector<mapEntity> mapRow;
typedef std::vector<mapRow> map;

const map map1 = {
        mapRow{WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL},
        mapRow{WALL, ____, ____, ____, ____, ____, ____, ____, ____, WALL},
        mapRow{WALL, ____, WALL, ____, ____, ____, ____, ____, ____, WALL},
        mapRow{WALL, ____, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL},
        mapRow{WALL, ____, WALL, ____, ____, ____, ____, ____, ____, WALL},
        mapRow{WALL, ____, WALL, WALL, ____, WALL, ____, WALL, WALL, WALL},
        mapRow{WALL, ____, WALL, ____, ____, WALL, ____, WALL, ____, WALL},
        mapRow{WALL, ____, WALL, WALL, WALL, WALL, ____, WALL, ____, WALL},
        mapRow{WALL, ____, ____, ____, ____, ____, ____, ____, ____, WALL},
        mapRow{WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL},
};

class Map{
    std::vector<map> savedMaps;

    public:
    Map();
    map getMap(unsigned inex);

};
#endif
//
// Created by padrition on 12/6/22.
//

#ifndef ZOOHRA_MAPHALL_H
#define ZOOHRA_MAPHALL_H

#include "../Map.h"
#include <tuple>
#include "../../RandUtil/RandUtil.h"

class MapHall :public Map{
private:
    const int _smallestHallWidth = 3;
    const int _biggestHallWidth = 5;
    void init();
public:
    MapHall();
    std::tuple<int,int> getDimentions();
    mapGrid& getMapReference();
};


#endif //ZOOHRA_MAPHALL_H

//
// Created by padrition on 12/6/22.
//

#ifndef ZOOHRA_MAPHALL_H
#define ZOOHRA_MAPHALL_H

#include "../Map.h"

class MapHall :public Map{
private:
    int randSize();
    void init();
public:
    MapHall();
};


#endif //ZOOHRA_MAPHALL_H

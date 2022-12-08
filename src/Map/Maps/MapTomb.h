//
// Created by padrition on 12/6/22.
//

#ifndef ZOOHRA_MAPTOMB_H
#define ZOOHRA_MAPTOMB_H

#include "../Map.h"

class MapTomb :public Map{
private:
    int randSize();
    void init();
public:
    MapTomb();
    int getDimentinos();

};


#endif //ZOOHRA_MAPTOMB_H

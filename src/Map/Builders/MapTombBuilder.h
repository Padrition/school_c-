//
// Created by padrition on 12/6/22.
//

#ifndef ZOOHRA_MAPTOMBBUILDER_H
#define ZOOHRA_MAPTOMBBUILDER_H

#include "../MapBuilder.h"
#include "../Maps/MapTomb.h"
#include "../../RandUtil/RandUtil.h"

class MapTombBuilder : MapBuilder{
private:
    const int _maxEnemyCount = 5;
protected:
    MapTomb * _tomb;
    void reset() override;

public:
    MapTombBuilder();
    ~MapTombBuilder();
    void buildBorders() override;
    void buildDoors();
    void buildStructures() override;
    void populateWithEnemies() override;
    Map *build() override;
};


#endif //ZOOHRA_MAPTOMBBUILDER_H

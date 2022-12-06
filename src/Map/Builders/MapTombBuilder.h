//
// Created by padrition on 12/6/22.
//

#ifndef ZOOHRA_MAPTOMBBUILDER_H
#define ZOOHRA_MAPTOMBBUILDER_H

#include "../MapBuilder.h"
#include "../Maps/MapTomb.h"

class MapTombBuilder : MapBuilder{
private:
    MapTomb * _tomb;

    MapTombBuilder();
    ~MapTombBuilder();

    void buildBorders() override;

    void buildStructures() override;

    void populateWithEnemies() override;

    Map *build() override;
};


#endif //ZOOHRA_MAPTOMBBUILDER_H

//
// Created by padrition on 12/6/22.
//

#ifndef ZOOHRA_MAPHALLBUILDER_H
#define ZOOHRA_MAPHALLBUILDER_H

#include "../MapBuilder.h"
#include "../Maps/MapHall.h"

class MapHallBuilder : public MapBuilder{
private:
    void buildDoors();
    const int _maxEnemyCount = 1;
protected:
    MapHall* _hall;
    void reset() override;
public:
    MapHallBuilder();
    ~MapHallBuilder();
    void buildBorders() override;

    void buildStructures() override;

    void populateWithEnemies() override;

    Map *build() override;
};


#endif //ZOOHRA_MAPHALLBUILDER_H

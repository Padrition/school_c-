//
// Created by padrition on 12/6/22.
//

#ifndef ZOOHRA_MAPBUILDER_H
#define ZOOHRA_MAPBUILDER_H

#include "Map.h"

class MapBuilder {
protected:
    virtual void reset() = 0;
public:
    virtual void buildBorders() = 0;
    virtual void buildStructures() = 0;
    virtual void populateWithEnemies() = 0;
    virtual Map* build() = 0;
};


#endif //ZOOHRA_MAPBUILDER_H

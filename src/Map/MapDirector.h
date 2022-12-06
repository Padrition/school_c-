//
// Created by padrition on 12/6/22.
//

#ifndef ZOOHRA_MAPDIRECTOR_H
#define ZOOHRA_MAPDIRECTOR_H

#include "MapBuilder.h"
class MapDirector {
private:
    MapBuilder* _mapBuilder;
public:
    MapDirector(MapBuilder* mapBuilder);
    void changeBuilder(MapBuilder* mapBuilder);
    void buildBasicMap();
};


#endif //ZOOHRA_MAPDIRECTOR_H

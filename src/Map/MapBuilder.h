//
// Created by padrition on 12/6/22.
//

#ifndef ZOOHRA_MAPBUILDER_H
#define ZOOHRA_MAPBUILDER_H


class MapBuilder {
public:
    virtual void buildBorders() = 0;
    virtual void buildStructures() = 0;
    virtual void populateWithEnemies() = 0;
};


#endif //ZOOHRA_MAPBUILDER_H

#ifndef MEDIATOR_H
#define MEDIATOR_H
#include "string"
class Mediator{
public:
    virtual void notify(std::string msg) = 0;
};
#endif
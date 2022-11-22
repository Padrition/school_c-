#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H
#include "ftxui/component/component.hpp"
using namespace ftxui;
class EventHandler{
    public:
    virtual void handle() = 0;
};
#endif
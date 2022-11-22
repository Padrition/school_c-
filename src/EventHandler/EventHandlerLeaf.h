#ifndef EVENTHANDLERLEAF_H
#define EVENTHANDLERLEAF_H
#include "EventHandler.h"
#include <ftxui/component/component.hpp>
class EventHandlerLeaf : public EventHandler{
    protected:
    const char M_RIGHT = 'd';
    const char M_LEFT = 'a';
    const char M_UP = 'w';
    const char M_DOWN = 's';
    ftxui::Event eventSignature;

    public:
    ftxui::Event getEventSignature(){
        return eventSignature;
    };
    virtual void handle() = 0;
};
#endif
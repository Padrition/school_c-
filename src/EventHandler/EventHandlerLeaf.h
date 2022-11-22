#ifndef EVENTHANDLERLEAF_H
#define EVENTHANDLERLEAF_H
#include "EventHandler.h"
#include <ftxui/component/component.hpp>
class EventHandlerLeaf : public EventHandler{
    protected:
    ftxui::Event eventSignature;

    public:
    ftxui::Event getEventSignature(){
        return eventSignature;
    };
    virtual void handle() = 0;
};
#endif
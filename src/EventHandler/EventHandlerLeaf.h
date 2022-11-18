#ifndef EVENTHANDLERLEAF_H
#define EVENTHANDLERLEAF_H
#include <EventHandler.h>
#include <component.hpp>
class EventHandlerLeaf : public EventHandler{
    protected:
    ftxui::Event uniqueEvent;

    public:
    ftxui::Event getUniqueEvent(){
        return uniqueEvent;
    };
    virtual void handle() = 0;
};
#endif
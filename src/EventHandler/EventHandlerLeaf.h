#ifndef EVENTHANDLERLEAF_H
#define EVENTHANDLERLEAF_H
#include "EventHandler.h"
#include <ftxui/component/component.hpp>
class EventHandlerLeaf : public EventHandler{
    protected:
    ftxui::Event m_eventSignature;

    public:
    ftxui::Event getEventSignature(){
        return m_eventSignature;
    };
    virtual void handle() = 0;
};
#endif
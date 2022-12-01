#include "EventHandlerComposite.h"
#include <memory>

EventHandlerComposite::EventHandlerComposite(){
    this->populateEventChildren();
}

void EventHandlerComposite::handle(){
    renderer |= CatchEvent([&](Event event){
        for(auto child : m_eventChildren){
            if(child->getEventSignature() == event){
                child->handle();
                return true;
            }
        }
        return false;
    });
}

void EventHandlerComposite::populateEventChildren() {
    this->m_eventChildren.push_back(new E_PlayerMoveDown());
    this->m_eventChildren.push_back(new E_PlayerMoveUp());
    this->m_eventChildren.push_back(new E_PlayerMoveLeft());
    this->m_eventChildren.push_back(new E_PlayerMoveRight());
}

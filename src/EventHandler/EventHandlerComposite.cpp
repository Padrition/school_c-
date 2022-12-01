#include "EventHandlerComposite.h"
#include <memory>

//In the constructor we want to add all EventChildren to eventChildren_ vector
EventHandlerComposite::EventHandlerComposite(){
    this->populateEventChildren();
}


void EventHandlerComposite::handle(){}

void EventHandlerComposite::listen(Component &renderer){
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

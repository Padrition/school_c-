#include "EventHandlerComposite.h"
#include <memory>

//In the constructor we want to add all EventChildren to eventChildren_ vector
EventHandlerComposite::EventHandlerComposite(){}


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

Mediator* EventHandlerComposite::getMediator() {
    return this->m_mediator;
}

void EventHandlerComposite::setMediator(Mediator * mediator) {
    this->m_mediator;
    this->populateEventChildren();
}

void EventHandlerComposite::populateEventChildren() {
    this->m_eventChildren.push_back(new E_PlayerMoveDown(this->getMediator()));
    this->m_eventChildren.push_back(new E_PlayerMoveUp(this->getMediator()));
    this->m_eventChildren.push_back(new E_PlayerMoveLeft(this->getMediator()));
    this->m_eventChildren.push_back(new E_PlayerMoveRight(this->getMediator()));
}

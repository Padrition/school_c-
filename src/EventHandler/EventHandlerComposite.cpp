#include "EventHandlerComposite.h"
#include <memory>

//In the constructor we want to add all EventChildren to eventChildren_ vector
EventHandlerComposite::EventHandlerComposite(Mediator * mediator){
    this->mediator = mediator;
    eventChildren.push_back(new E_PlayerMoveRight(mediator->getPlayer()));
    eventChildren.push_back(new E_PlayerMoveLeft(mediator->getPlayer()));
    eventChildren.push_back(new E_PlayerMoveDown(mediator->getPlayer()));
    eventChildren.push_back(new E_PlayerMoveUp(mediator->getPlayer()));
}

void EventHandlerComposite::handle(){}

void EventHandlerComposite::listen(Component &renderer){
    renderer |= CatchEvent([&](Event event){
        for(auto child : eventChildren){
            if(child->getEventSignature() == event){
                child->handle();
                return true;
            }
        }
        return false;
    });
}
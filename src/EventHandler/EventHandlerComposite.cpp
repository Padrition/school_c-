#include "EventHandlerComposite.h"
using namespace ftxui;
//In the constructor we want to add all EventChildren to eventChildren_ vector
EventHandlerComposite::EventHandlerComposite(){
    //eventChildren.push_back(new E_PlayerMoveRight());
}

//this method will derevate all the task to its children by calling handle() method from
//The needed child 
void EventHandlerComposite::handle(){
    for(EventHandlerLeaf * child : eventChildren){
        if(child->getUniqueEvent() == currentEvent){
            child->handle();
        }
    }
}

void EventHandlerComposite::listen(){
    CatchEvent([&](Event event){
        currentEvent = event;
        return true;
    });
}
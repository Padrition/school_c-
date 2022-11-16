#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H
class EventHandler{
    private:
    EventHandler();

    public:
    virtual void handle() = 0;
};
#endif
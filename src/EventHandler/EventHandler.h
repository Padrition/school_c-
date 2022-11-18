#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H
class EventHandler{
    protected:
    EventHandler();
    ~EventHandler();

    public:
    virtual void handle() = 0;
};
#endif
#ifndef LAB2OOP_DEQUEINTERFACE_H
#define LAB2OOP_DEQUEINTERFACE_H

#include "ContainerInterface.h"


class DequeInterface: public virtual ContainerInterface  {

public :   virtual bool pushFront(int value) = 0;
    virtual bool pushBack(int value) = 0;
    virtual int popFront() = 0;
    virtual int popBack() = 0;
    virtual int peekFront() const = 0;
    virtual int peekBack() const = 0;

 virtual ~DequeInterface(){}
};



#endif //LAB2OOP_DEQUEINTERFACE_H

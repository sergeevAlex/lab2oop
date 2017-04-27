#ifndef LAB2OOP_DEQUEINTERFACE_H
#define LAB2OOP_DEQUEINTERFACE_H

#include "ContainerInterface.h"

template <typename T>
class DequeInterface: public virtual ContainerInterface<T>  {

public :   virtual bool pushFront(const T& value) = 0;
    virtual bool pushBack(const T& value) = 0;
    virtual T popFront() = 0;
    virtual T& peekFront() = 0;
    virtual T& peekBack() = 0;
    virtual T popBack() = 0;
    virtual T peekFront() const = 0;
    virtual T peekBack() const = 0;
    virtual ~DequeInterface(){}
};



#endif //LAB2OOP_DEQUEINTERFACE_H

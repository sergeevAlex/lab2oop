#ifndef LAB2OOP_PUSHPOPCONTAINERINTERFACE_H
#define LAB2OOP_PUSHPOPCONTAINERINTERFACE_H
#include "ContainerInterface.h"

class PushPopContainerInterface: public virtual ContainerInterface  {
public :    virtual int pop() = 0;
            virtual int peek() const = 0;
            virtual bool push(int value) = 0;
            virtual ~PushPopContainerInterface() {}

};

#endif //LAB2OOP_PUSHPOPCONTAINERINTERFACE_H

#ifndef LAB2OOP_PUSHPOPCONTAINERINTERFACE_H
#define LAB2OOP_PUSHPOPCONTAINERINTERFACE_H
#include "ContainerInterface.h"
template <typename T>
class PushPopContainerInterface: public virtual ContainerInterface<T>  {
public :    virtual T pop() = 0;
            virtual T peek() const = 0;
            virtual T& peek() = 0;
            virtual bool push(const T& value) = 0;
            virtual ~PushPopContainerInterface() {}

};

#endif //LAB2OOP_PUSHPOPCONTAINERINTERFACE_H

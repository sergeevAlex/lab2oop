#ifndef LAB2OOP_INDEXEDCONTAINERINTERFACE_H
#define LAB2OOP_INDEXEDCONTAINERINTERFACE_H

#include "ContainerInterface.h"

class IndexedContainerInterface: public virtual ContainerInterface {
public :
    virtual int get(int index) const = 0;
    virtual void set(int index, int value) = 0;
    virtual ~IndexedContainerInterface(){}
};


#endif //LAB2OOP_INDEXEDCONTAINERINTERFACE_H

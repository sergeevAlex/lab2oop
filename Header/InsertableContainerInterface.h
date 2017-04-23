#ifndef LAB2OOP_INSERTABLECONTAINERINTERFACE_H
#define LAB2OOP_INSERTABLECONTAINERINTERFACE_H

#include "IndexedContainerInterface.h"
template <typename T>

class InsertableContainerInterface: public virtual IndexedContainerInterface<T> {

public : virtual bool insertAt(int index,const T& value) = 0;
    virtual T removeAt(int index) = 0;
    virtual ~InsertableContainerInterface(){}
};

#endif //LAB2OOP_INSERTABLECONTAINERINTERFACE_H

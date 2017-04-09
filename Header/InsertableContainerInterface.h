#ifndef LAB2OOP_INSERTABLECONTAINERINTERFACE_H
#define LAB2OOP_INSERTABLECONTAINERINTERFACE_H

#include "IndexedContainerInterface.h"

class InsertableContainerInterface: public virtual IndexedContainerInterface {

public : virtual bool insertAt(int index,int value) = 0;
    virtual int removeAt(int index) = 0;
    virtual ~InsertableContainerInterface(){}
};

#endif //LAB2OOP_INSERTABLECONTAINERINTERFACE_H

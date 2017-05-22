#ifndef LAB2OOP_INDEXEDCONTAINERINTERFACE_H
#define LAB2OOP_INDEXEDCONTAINERINTERFACE_H
#include "ContainerInterface.h"

template <typename T>
class IndexedContainerInterface: public virtual ContainerInterface<T> {

public :
    virtual T get(int index) const = 0;
    virtual T& get(int index) = 0;
    virtual void set(int index, const T& value) = 0;
    T& operator[](int index){
        return this->get(index);
    }
    virtual ~IndexedContainerInterface(){}
};

#endif //LAB2OOP_INDEXEDCONTAINERINTERFACE_H
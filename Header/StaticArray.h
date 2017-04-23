#ifndef LAB2OOP_STATICARRAY_H
#define LAB2OOP_STATICARRAY_H

#include "IndexedContainerInterface.h"
template<typename T>
class StaticArray:public virtual IndexedContainerInterface<T>{

private:
    T* arr;
    int MAX;
    int length = 0;

public:
    StaticArray(int number){
        MAX = 1000;
        length = number;
        if(number <= MAX){
        arr = new T[length]{};

        }
else throw "Переполнение стэка";
    }
    T get(int index) const;
    void set(int index, const T& value);
    int size() const;
    bool isEmpty() const;
    string toString() const;

    T& get(int index);

    StaticArray(const StaticArray& sa);
    StaticArray<T>& operator=(const StaticArray& sa);

    virtual ~StaticArray(){
        delete [] arr;
    }
};


#endif //LAB2OOP_STATICARRAY_H

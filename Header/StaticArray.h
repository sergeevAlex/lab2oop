#ifndef LAB2OOP_STATICARRAY_H
#define LAB2OOP_STATICARRAY_H

#include "IndexedContainerInterface.h"

class StaticArray:public virtual IndexedContainerInterface{

private:
    int* arr;
    int MAX;
    int length = 0;

public:
    StaticArray(int number){
        MAX = 1000;
        length = number;
        if(number <= MAX){
        arr = new int[length];}
else throw "Переполнение стэка";
    }
    int get(int index) const;
    void set(int index, int value);
    int size() const;
    bool isEmpty() const;
    string toString() const;

    virtual ~StaticArray(){
        delete [] arr;

    }
};


#endif //LAB2OOP_STATICARRAY_H

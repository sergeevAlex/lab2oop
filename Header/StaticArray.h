#ifndef LAB2OOP_STATICARRAY_H
#define LAB2OOP_STATICARRAY_H
#include "IndexedContainerInterface.h"
#include "JavaIteratorInterface.h"

template<typename T>
class StaticArrayIterator;
template<typename T>
class StaticArray:public virtual IndexedContainerInterface<T>{
private:
    T* arr;
    int MAX;
    int length = 0;

public:
    friend class StaticArrayIterator<T>;
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

template<typename T>
class StaticArrayIterator: public virtual JavaIteratorInterface<T> {
private:         int index = 0;

public:

    T Next(StaticArray<T> obj){
        T value  =  obj.arr[index];
        if(index < obj.size() ){
        index++;}
        return value;
    }
    bool hasNext(StaticArray<T> obj){
        return obj.arr[index++]==NULL;
    }
};

#endif //LAB2OOP_STATICARRAY_H

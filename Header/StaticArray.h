#ifndef LAB2OOP_STATICARRAY_H
#define LAB2OOP_STATICARRAY_H
#include "IndexedContainerInterface.h"
#include "JavaIteratorInterface.h"

template<typename T>
class StaticArrayIterator;
template<typename T>
class StaticArrayIteratorConst;
template<typename T>
class StaticArray:public virtual IndexedContainerInterface<T>{
private:
    T* arr;
    int MAX;
    int length = 0;

public:
    friend class StaticArrayIterator<T>;
    friend class StaticArrayIteratorConst<T>;
    StaticArray(int number){
        MAX = 1000;
        length = number;
        if(number <= MAX){
        arr = new T[length]{};
        }
        else throw "Переполнение стэка";
    }

    T get(int index) const;
    JavaIteratorInterface<const T&>* createIteratorConst() const {
        return new StaticArrayIteratorConst<T>(*this);
    }

    JavaIteratorInterface<T&>* createIterator() {
        return new StaticArrayIterator<T>(*this);
    }
    void set(int index, const T& value);
    int size() const;
    bool isEmpty() const;
//    string toString() const;
    T& get(int index);
    StaticArray(const StaticArray& sa);
    StaticArray<T>& operator=(const StaticArray& sa);

    virtual ~StaticArray(){
        delete [] arr;
    }
};

template<typename T>
class StaticArrayIteratorConst: public virtual JavaIteratorInterface<const T&> {
private:  T* arr;
    int index;
    int size;
public:
    StaticArrayIteratorConst(const StaticArray<T>& st):arr(st.arr),index(0),size(st.size()){}
    const T& Next(){
        return arr[index++];
    }
    bool hasNext() const {
        return size != index;
    }

};


template<typename T>
class StaticArrayIterator: public virtual JavaIteratorInterface<T&> {
private:  T* arr;
        int index;
        int size;

public:
    StaticArrayIterator(StaticArray<T>& st):arr(st.arr),index(0),size(st.size()){}
    T& Next(){
       return arr[index++];
    }
    bool hasNext() const
    {
        return size!=index;
    }
};


#endif //LAB2OOP_STATICARRAY_H

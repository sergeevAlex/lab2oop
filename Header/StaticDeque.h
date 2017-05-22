#ifndef LAB2OOP_STATICDEQUE_H
#define LAB2OOP_STATICDEQUE_H
#include "DequeInterface.h"
#include "JavaIteratorInterface.h"
template <typename T>
class StaticDequeIterator;
template <typename T>
class StaticDequeIteratorConst;
template <typename T>
class StaticDeque: public virtual DequeInterface<T>{

private:
    T* arr;
    int MAX;
    int dequeSize = 0;

public:
    friend class StaticDequeIterator<T>;
    friend class StaticDequeIteratorConst<T>;

    StaticDeque(int number){
        MAX = 100;
        dequeSize = number;
        if(number <= MAX){
            arr = new T[number]{};
//            for(int i = 0; i < MAX;i++){
//            arr[i] = T();
//            }
        }
        else throw "OverMax";
    }
    JavaIteratorInterface<const T&>* createIteratorConst() const {
        return new StaticDequeIteratorConst<T>(*this);
    }

    JavaIteratorInterface<T&>* createIterator() {
        return new StaticDequeIterator<T>(*this);
    }


    typedef StaticDequeIterator<T> iterator;
    typedef StaticDequeIteratorConst<T> const_iterator;

    bool pushFront(const T& value);
    bool pushBack(const T& value);
    T popFront();
    T popBack();
    T peekFront() const;
    T peekBack() const;
    int size() const;
    bool isEmpty() const;
//    string toString() const;
    T& peekFront();
    T& peekBack();
    StaticDeque(const StaticDeque& sd);
    StaticDeque<T>& operator=(const StaticDeque &sd);
    virtual ~StaticDeque(){
    }
};


template<typename T>
class StaticDequeIteratorConst: public virtual JavaIteratorInterface<const T&> {
private:  T* arr;
    int index;
    int size;
public:
    StaticDequeIteratorConst(const StaticDeque<T>& st):arr(st.arr),index(0),size(st.size()){}
    const T& Next(){
        return arr[index++];
    }
    bool hasNext() const {
        return size != index;
    }

};



template<typename T>
class StaticDequeIterator: public virtual JavaIteratorInterface<T&> {
private:  T* arr;
    int index;
    int size;

public:
    StaticDequeIterator(StaticDeque<T>& st):arr(st.arr),index(0),size(st.size()){}
    T& Next(){
        return arr[index++];
    }
    bool hasNext() const
    {
        return size!=index;
    }
};
#endif //LAB2OOP_STATICDEQUE_H

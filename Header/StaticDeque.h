#ifndef LAB2OOP_STATICDEQUE_H
#define LAB2OOP_STATICDEQUE_H
#include "DequeInterface.h"
template <typename T>

class StaticDeque: public virtual DequeInterface<T>{

private:
    T* arr;
    int MAX;
    int dequeSize = 0;

public:
    StaticDeque(int number){
        MAX = 1000;
        dequeSize = number;
        if(number <= MAX){
            arr = new T[number]{};
 }
        else throw "OverMax";
    }
    bool pushFront(const T& value);
    bool pushBack(const T& value);
    T popFront();
    T popBack();
    T peekFront() const;
    T peekBack() const;
    int size() const;
    bool isEmpty() const;
    string toString() const;
    T& peekFront();
    T& peekBack();
    StaticDeque(const StaticDeque& sd);
    StaticDeque<T>& operator=(const StaticDeque &sd);
    virtual ~StaticDeque(){}
};


#endif //LAB2OOP_STATICDEQUE_H

#ifndef LAB2OOP_STATICDEQUE_H
#define LAB2OOP_STATICDEQUE_H

#include "DequeInterface.h"



class StaticDeque: public virtual DequeInterface{

private:
    int* arr;
    int MAX;
    int dequeSize = 0;

public:
    StaticDeque(int number){
        MAX = 1000;
        dequeSize = number;
        if(number <= MAX){
            arr = new int[dequeSize];
        for(int i =0;i<dequeSize;i++){
            arr[i] = 0;

        }}
        else throw "OverMax";
    }
    bool pushFront(int value);
    bool pushBack(int value);
    int popFront();
    int popBack();
    int peekFront() const;
    int peekBack() const;
    int size() const;
    bool isEmpty() const;
    string toString() const;

    virtual ~StaticDeque(){}
};


#endif //LAB2OOP_STATICDEQUE_H

#ifndef LAB2OOP_STATICDEQUE_H
#define LAB2OOP_STATICDEQUE_H

#include "DequeInterface.h"
class outofArraylenght: public exception {
    virtual const char* what() const throw(){
        return "Вышли за максимальное количество элементов";
    }
} ExtraArray;


class StaticDeque: public virtual DequeInterface{

private:
    int* arr;
    int MAX;
    int length = 0;

public:
    StaticDeque(int number){
        MAX = 1000;
        length = number;
        if(number <= MAX){
            arr = new int[length];}
        else throw ExtraArray;
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

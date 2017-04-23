#ifndef LAB2OOP_QUEUE_H
#define LAB2OOP_QUEUE_H
#include <iostream>
#include "string.h"
using namespace std;
#include "PushPopContainerInterface.h"
template <typename T>
struct QUEUE{
    T key;
    QUEUE* next;
    QUEUE* back;
};
template <typename T>
class Queue: public virtual PushPopContainerInterface<T>{
private: QUEUE<T> *begin;

public :
    Queue<T>(){begin = NULL;}
    T pop();
    T peek() const;
    bool push(const T& value);
    int size() const;
    bool isEmpty() const;
    string toString() const;
    T& peek();
    Queue<T>(const Queue<T>& qt);
    Queue<T>& operator=(const Queue<T>& qt);

    virtual ~Queue() {delete begin;}

};

#endif //LAB2OOP_QUEUE_H

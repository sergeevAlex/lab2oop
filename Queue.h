#ifndef LAB2OOP_QUEUE_H
#define LAB2OOP_QUEUE_H
#include <iostream>
#include "string.h"
using namespace std;
#include "PushPopContainerInterface.h"

struct QUEUE{
    int key;
    QUEUE* next;
    QUEUE* back;
};

class Queue: public virtual PushPopContainerInterface{
private: QUEUE *begin;

public :
    Queue(){begin = NULL;}
    int pop();
    int peek() const;
    bool push(int value);
    int size() const;
    bool isEmpty() const;
    string toString() const;
    virtual ~Queue() {}

};

#endif //LAB2OOP_QUEUE_H

#ifndef LAB2OOP_LINKEDLIST_H
#define LAB2OOP_LINKEDLIST_H

#include "PushPopContainerInterface.h"
#include "InsertableContainerInterface.h"
#include <iostream>
#include "string.h"
using namespace std;
struct LLIST {
    int value;
    LLIST* next;
};

class LinkedList: public virtual PushPopContainerInterface, public virtual  InsertableContainerInterface {

private: LLIST *next;
public:
    LinkedList(){next = NULL;}
    int pop();
    int peek() const;
    bool push(int value);
    bool insertAt(int index,int value);
    int removeAt(int index);
    int get(int index) const;
    void set(int index, int value);
    bool isEmpty() const;
    int size() const;
    string toString() const;
    virtual ~LinkedList(){
        delete next;
    }
};

#endif //LAB2OOP_LINKEDLIST_H

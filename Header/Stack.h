#ifndef LAB2OOP_STACK_H
#define LAB2OOP_STACK_H
#include "PushPopContainerInterface.h"
#include <iostream>
#include "string.h"
using namespace std;
struct STACK;

class Stack: public virtual PushPopContainerInterface {
private: STACK *next;
public :
        Stack(){}
        bool push(int value);
        int pop();
        int peek() const;
        int size() const;
        bool isEmpty() const;
        string toString() const;
        virtual ~Stack(){
            delete next;
        }
};

#endif //LAB2OOP_STACK_H

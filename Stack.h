#ifndef LAB2OOP_STACK_H
#define LAB2OOP_STACK_H
#include "PushPopContainerInterface.h"

struct STACK {
    int value;
    STACK* next;
};

class Stack: public virtual PushPopContainerInterface {
private: STACK *next;
public :
        Stack(){}
        bool push(int value);
        int pop();
        int peek() const;
        int size() const;
        bool isEmpty() const;
        char* toString() const;

        virtual ~Stack(){
            delete next;
        }

};

#endif //LAB2OOP_STACK_H

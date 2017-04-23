#ifndef LAB2OOP_STACK_H
#define LAB2OOP_STACK_H
#include "PushPopContainerInterface.h"
#include <iostream>
#include "string.h"
using namespace std;
template <typename T>
struct STACK;

template <class T>
class Stack: public virtual PushPopContainerInterface<T> {
private: STACK<T> *next;
public :
        Stack<T>(){}
        Stack(Stack<T>& s);
        bool push(const T& value);
        T pop();
        T peek() const;
        int size() const;
        bool isEmpty() const;
        string toString() const;
        T& peek();
        Stack<T>& operator=(const Stack& st);
    virtual ~Stack<T>(){
           delete next;
        }
};

#endif //LAB2OOP_STACK_H

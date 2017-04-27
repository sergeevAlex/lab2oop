#ifndef  LAB2OOP_STACK_H
#define  LAB2OOP_STACK_H
#include "PushPopContainerInterface.h"
#include <iostream>
#include "string.h"
#include "JavaIteratorInterface.h"

using namespace std;
template <typename T>
struct STACK;

template <class T>
class Stack: public virtual PushPopContainerInterface<T> {
    private: STACK<T> *next;
public :
        Stack<T>(){
            next = NULL;
        }
        Stack(const Stack<T>& s);
        bool push(const T& value);
        T pop();
        T peek() const;
        JavaIteratorInterface<const T&>* createIteratorConst() const {}
        JavaIteratorInterface<T&>* createIterator() {
        //   QueueIterator *qt = new QueueIterator();
        // return qt;
        }
        int size() const;
    bool isEmpty() const;
//        string toString() const;
        T& peek();
        Stack<T>& operator=(const Stack& st);

        virtual ~Stack<T>(){
           delete next;
        }

};

template <typename T>
class StackIterator: public virtual JavaIteratorInterface<T>{
    private: STACK<T> *next;

public:
    T Next(){
        T value = next->value;
        next=next->next;
        return value;
    }


};

#endif //LAB2OOP_STACK_H

#ifndef  LAB2OOP_STACK_H
#define  LAB2OOP_STACK_H
#include "PushPopContainerInterface.h"
#include <iostream>
#include "string.h"
#include "JavaIteratorInterface.h"

using namespace std;
template <typename T>
struct STACK;
template <typename T>
class StackIteratorConst;
template <typename T>
class StackIterator;

template <class T>
class Stack: public virtual PushPopContainerInterface<T> {
    private: STACK<T> *next;
public :
        Stack<T>(){
            next = NULL;
        }

        friend class StackIterator<T>;
        friend class StackIteratorConst<T>;
        Stack(const Stack<T>& s);
        bool push(const T& value);
        T pop();
        T peek() const;
    typedef StackIterator<T> iterator;
    typedef StackIteratorConst<T> const_iterator;

    JavaIteratorInterface<const T&>* createIteratorConst() const {
            return new StackIteratorConst<T>(*this);
        }
    JavaIteratorInterface<T&>* createIterator() {
            return new StackIterator<T>(*this);
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
class StackIteratorConst: public virtual JavaIteratorInterface<const T&>{
private: STACK<T> *next;
public:
    StackIteratorConst(const Stack<T>& st):next(st.next){}
    const T& Next(){
        const T& value = next->value;
        next=next->next;
        return value;
    }

    bool hasNext() const {
        return next != nullptr;
    }

};

template <typename T>
class StackIterator: public virtual JavaIteratorInterface<T&>{
private: STACK<T> *next;
public:
    StackIterator(Stack<T>& st):next(st.next){}
    T& Next(){
        T& value = next->value;
        next=next->next;
        return value;
    }

    bool hasNext() const {
        return next != nullptr;
    }
};


#endif //LAB2OOP_STACK_H

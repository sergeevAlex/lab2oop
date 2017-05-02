#ifndef LAB2OOP_LINKEDLIST_H
#define LAB2OOP_LINKEDLIST_H
#include "PushPopContainerInterface.h"
#include "InsertableContainerInterface.h"
#include <iostream>
#include "string.h"
#include "JavaIteratorInterface.h"
using namespace std;
template <typename T>
class LinkedListIteratorConst;
template <typename T>
class LinkedListIterator;

template <typename T>
struct LLIST {
    T value;
    LLIST* next;
};
template <typename T>
class LinkedList: public virtual PushPopContainerInterface<T>, public virtual  InsertableContainerInterface<T> {
private:
    LLIST<T> *next;
public:
    LinkedList<T>() { next = NULL; }
    friend class LinkedListIteratorConst<T>;
    friend class LinkedListIterator<T>;
    T pop();

    JavaIteratorInterface<const T&>* createIteratorConst() const {
        return new LinkedListIteratorConst<T>(*this);
    }

    JavaIteratorInterface<T&>* createIterator() {
        return new LinkedListIterator<T>(*this);
    }

    T peek() const;
    bool push(const T &value);
    bool insertAt(int index, const T &value);
    T removeAt(int index);
    T get(int index) const;
    void set(int index, const T &value);
    bool isEmpty() const;
    int size() const;
//    string toString() const;
    T& peek();
    T& get(int index) {
        LLIST<T> *tmp = next;
        while(tmp) {
            if (tmp->next == NULL) {
                return tmp->value;
            }
            else tmp = tmp->next;
        }
    }
    LinkedList(const LinkedList& ll);
    LinkedList<T>& operator=(const LinkedList& ll);
    virtual ~LinkedList<T>() {
        LLIST<T> *temp = next;
        while (temp) {
            LLIST<T> *tt = temp->next;
            delete temp;
            temp = tt;
//        }
    }
}
};

template<typename T>
class LinkedListIteratorConst : public virtual JavaIteratorInterface<const T&>{
private: LLIST<T> *next;
public:
    LinkedListIteratorConst(const LinkedList<T>& ll):next(ll.next){}

    const T& Next(){
        const T& value = next->value;
        next =  next->next;
        return value;
    }

    bool hasNext() const {
       return next != nullptr;
    }
};

template<typename T>
class LinkedListIterator : public virtual JavaIteratorInterface<T&>{
private: LLIST<T> *next;
public:
    LinkedListIterator(LinkedList<T>& ll):next(ll.next){}
     T& Next() {
        T& value = next->value;
        next = next->next;
        return value;
    }
    bool hasNext() const{
        return next != nullptr;
    }
};

#endif //LAB2OOP_LINKEDLIST_H

#ifndef LAB2OOP_LINKEDLIST_H
#define LAB2OOP_LINKEDLIST_H

#include "PushPopContainerInterface.h"
#include "InsertableContainerInterface.h"
#include <iostream>
#include "string.h"

using namespace std;
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

    LinkedList() { next = NULL; }
//    LinkedList(LinkedList& k);

    T pop();

    T peek() const;

    bool push(const T &value);

    bool insertAt(int index, const T &value);

    T removeAt(int index);

    T get(int index) const;

    void set(int index, const T &value);

    bool isEmpty() const;

    int size() const;

    string toString() const;

    T& get(int index) { }

    LinkedList(const LinkedList& ll);
    LinkedList<T>& operator=(const LinkedList& ll);
    virtual ~LinkedList<T>() {
//        LLIST<T> *temp = next;
//        while (temp) {
//            LLIST<T> *tt = temp->next;
//            delete temp;
//            temp = tt;
//        }

        delete next;
    }

    T& peek();
};
#endif //LAB2OOP_LINKEDLIST_H

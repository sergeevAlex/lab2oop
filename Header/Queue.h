#ifndef LAB2OOP_QUEUE_H
#define LAB2OOP_QUEUE_H
#include <iostream>
#include "string.h"
using namespace std;
#include "PushPopContainerInterface.h"
#include "JavaIteratorInterface.h"

template <typename T>
class QueueIteratorConst;

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
    friend class QueueIteratorConst<T>;
    Queue<T>(){begin = NULL;}
    T pop();
    T peek() const;
    bool push(const T& value);
    int size() const;
    bool isEmpty() const;
//    string toString() const;
    T& peek();
    Queue<T>(const Queue<T>& qt);

    JavaIteratorInterface<const T&>* createIteratorConst() const {
       return new QueueIteratorConst<T>(*this);
    }

    JavaIteratorInterface<T&>* createIterator() {
       //   QueueIterator *qt = new QueueIterator();
       // return qt;
    }
    Queue<T>& operator=(const Queue<T>& qt);
    virtual ~Queue() {delete begin;}

};


template<typename T>
class QueueIteratorConst : public virtual JavaIteratorInterface<const T&> {
    QUEUE<T> *begin;
public:    QueueIteratorConst(const Queue<T>& qt):begin(qt.begin){}

    const T& Next(){
        const T& value = begin->key;
        begin = begin->next;
        return value;
    }

    bool hasNext() const{
        return begin != nullptr;
    }
};


#endif //LAB2OOP_QUEUE_H

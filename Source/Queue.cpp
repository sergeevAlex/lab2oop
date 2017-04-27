#include "../Header/Queue.h"
#include <iostream>
#include "string.h"
#include <sstream>
using namespace std;

//
//template <typename string>
//string Queue<string>::toString() const {
//    string s;
//    QUEUE<string> *temp = begin;
//    ostringstream  ostr;
//    while(temp != NULL){
//        ostr << temp->key << "!!!!!!!";
//        s = ostr.str();
//        temp = temp->next;
//    }
//    s += "NULL";
//    return s;
//}

//template <typename T>
//string Queue<T>::toString() const {
////    string s;
////    QUEUE<T> *temp = begin;
////    ostringstream  ostr;
////    while(temp != NULL){
////        ostr << temp->key << "<-";
////        s = ostr.str();
////        temp = temp->next;
////    }
////    s += "NULL";
////    return s;
//}




template<typename T>
T Queue<T>::pop() {
    T temp = begin->key;
    QUEUE<T> *t = begin;
    begin = begin->next;
    delete t;
    return temp;
}
template<typename T>
T Queue<T>::peek() const {
    return begin->key;  //Просто возвращает последний элемент, без выброса его! :)
}
template<typename T>
bool Queue<T>::push(const T& value) {
    QUEUE<T> *p = new QUEUE<T>;
    p->key = value;
    p->next = NULL;

    if(begin == NULL)
    {
        begin = new QUEUE<T>;
        begin = p;
        begin->back = NULL;
    }
    else {
        while (1) {
            if ((begin)->next == NULL) {
                begin->next = p;
                break;
            }
            QUEUE<T> *temp = begin;
            begin = begin->next;
            begin->back = temp;
        }

        while (1) {
            if (begin->back == NULL)
                break;
            begin = begin->back;
        }
        return true;
    }
}


template<typename T>
int Queue<T>::size() const {
    QUEUE<T> *temp = begin;
    int counter = 0;
    while(temp){
        counter++;
        temp = temp->next;
    }
    return counter;
}

template<typename T>
bool Queue<T>::isEmpty() const {

    return begin == NULL;

}

template<typename T>
T& Queue<T>::peek() {
    return begin->key;
}

template<typename T>
Queue<T>::Queue(const Queue<T> &qt) {
    begin = NULL;
    QUEUE<T> *temp = qt.begin;
    while(temp != NULL){
        push(temp->key);
        temp = temp->next;
    }
}

template<typename T>
Queue<T>& Queue<T>::operator=(const Queue<T> &qt) {
    begin = NULL;
    QUEUE<T> *temp = qt.begin;
    while(temp != NULL){
        push(temp->key);
        temp = temp->next;
    }
}
#include "../Header/Stack.h"
#include <iostream>
#include "string.h"
#include <sstream>
using namespace std;

template <typename T>
struct STACK
{
T value;
STACK* next;
};

template<typename T>
Stack<T>::Stack(const Stack<T> &s){
    next = NULL;
    STACK<T> *temp = s.next;
    while(temp != NULL){
        push(temp->value);
        temp = temp->next;
    }
};

//template <class T>
//string Stack<T>::toString() const {
//    string s = " ";
//    ostringstream  ostr;
//    STACK<T> *temp = next;
////    while(temp != NULL){
////        ostr << temp->value << "->";
////        s = ostr.str();
////        temp = temp->next;
////            }
////    s += "NULL";
//
//    while(temp != NULL){
////         s += to_string(temp->value);
//         ostr << temp->value << "<--";
//         s = ostr.str();
//         temp = temp->next;
//    }
//    s+= "NULL";
//    return s;
//}

template <class T>
bool Stack<T>::isEmpty() const {
    return next == NULL;
}

template <class T>
T Stack<T>::peek() const {
return next->value;
}

template <class T>
T Stack<T>::pop() {
    T temp = next->value;
    STACK<T> *st = next;
    next = next->next;
    delete st;
    return temp;
}

template <class T>
int Stack<T>::size() const {
    int index = 0;
    STACK<T> *temp = next;
    while(temp){
        temp  = temp->next;
        index++;
        }
    return index;
}
template <class T>
bool Stack<T>::push(const T& value) { //check !
    STACK<T> *st = new STACK<T>;
    st->value = value;
    st->next = next;
    next = st;
//    next->next = NULL;
}
template<typename T>
T& Stack<T>::peek() {
    return next->value;
}
template<typename T>
Stack<T>& Stack<T>::operator=(const Stack &st) {
    next = NULL;
    STACK<T> *temp = st.next;
    while(temp->value!= NULL){//Problem with (temp != NULL) - doesn't work(always true), this var isn't acc for 'string and 0 values'
        push(temp->value);
        temp = temp->next;
    }
    return *this;
}
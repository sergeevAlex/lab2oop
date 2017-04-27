#include "../Header/LinkedList.h"
#include <iostream>
#include "string.h"
#include <sstream>
using namespace std;
template <typename T>
string LinkedList<T>::toString() const {
    string s;
    ostringstream  ostr;
    LLIST<T> *tmp = next;
    if (tmp == NULL) {
        s = "EMPTY";
        return s;
    }
    if (tmp->next == NULL) {
//        s.append(to_string(tmp->value));
//        s.append( " --> ");
//        s.append("NULL");
        ostr << tmp->value << "-->" << "NULL";
        s = ostr.str();
    }
    else {
        while(tmp != NULL) {
            ostr << tmp->value << "-->";
            s = ostr.str();
            tmp = tmp->next;
        }

    }
    s += "NULL";
    return s;

}

template <typename T>
bool LinkedList<T>::isEmpty() const {
    return next == NULL;
}

template <typename T>
T LinkedList<T>::pop() { if(next!=NULL)
    {return next->value;}
    else return NULL;}

template <typename T>
T LinkedList<T>::peek() const {
    LLIST<T> *tmp = next;
    while(tmp){
        if(tmp->next == NULL){
            return tmp->value;
        }
        else tmp=tmp->next;
    }
}

template <typename T>
bool LinkedList<T>::push(const T& value) {
       if(next != NULL) {
           LLIST<T> *tmp = new LLIST<T>;
           tmp->value = value;
           tmp->next = next;
           next = tmp;
       }

    else {
           next = new LLIST<T>;
           next->value = value;
           next->next = NULL;
       }
}

template <typename T>
T  LinkedList<T>::get(int index) const {
    int counter = 0;
    T tmp_data = 0;
    LLIST<T> *tmp2 = next;
    while(tmp2){
        if(index == counter){ tmp_data = tmp2->value; break;}
        else tmp2= tmp2->next;
        counter++;
    }
    return tmp_data;
}
template <typename T>
bool LinkedList<T>::insertAt(int index,const T& value) {
    LLIST<T> *ins = new LLIST<T>;
    ins->value = value;
    if(next == NULL){
        ins->next = NULL;
        next = ins;
        return true;
    }
    LLIST<T> *t = next;
    LLIST<T> *t1 = next;
    int counter = 0;
    while(t){
        if(index == counter){
            t->next = ins;
            ins->next = t1;
            return true;        }
        t = t1;
        t1=t1->next;
        counter++;
    }
    t->next = ins;
    ins->next = NULL;
}


template <typename T>
void LinkedList<T>::set(int index, const T& value) {
    int counter = 0;
    LLIST<T> *tmp = next;
    while(tmp){
        if(index == counter){ tmp->value = value; break;}
        else tmp = tmp->next;
        counter++;
    }

}
template <typename T>
T  LinkedList<T>::removeAt(int index)
{
    int counter = 0;
    T tmp_data;
    LLIST<T> *tmp2 = next;
        while(tmp2){
            if(index == counter){ tmp_data = tmp2->value; break;}
            else tmp2 = tmp2->next;
            counter++;
        }
        LLIST<T> *tmp = next;
        if(tmp == NULL){
            cout << "Node is empty!" << endl;
            return 0;
        }
        if(tmp->value == tmp_data){
            next = tmp->next;
            delete tmp;
            return NULL;
        }

        LLIST<T> *tmp1 = tmp->next;
        while(tmp1)
        {
            if(tmp1->value == tmp_data){
                tmp->next  = tmp1->next;
                delete tmp1;
                return NULL;
            }
            tmp = tmp1;
            tmp1 = tmp1->next;
        }
}

template <typename T>
int  LinkedList<T>::size() const {
    int index = 0;
    LLIST<T> *temp = next;
    while(temp){
        temp  = temp->next;
        index++;
    }
    return index;
}

template <typename T>
T& LinkedList<T>::peek() {

    if(next!=NULL)
    {return next->value;}
    else return NULL;

}

template <typename T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList &ll) {
    next = NULL;
    LLIST<T> *temp = ll.next;
    while(temp != NULL){
        push(temp->value);
        temp = temp->next;
    }
}

template <typename T>
LinkedList<T>::LinkedList(const LinkedList &ll) {
    next = NULL;
    LLIST<T> *temp = ll.next;
    while(temp != NULL){
        push(temp->value);
        temp = temp->next;
    }
}

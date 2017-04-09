#include "Queue.h"
#include <iostream>
#include "string.h"
using namespace std;

string Queue::toString() const {
    string s;
    QUEUE *temp = begin;
    while(temp!= NULL){
        s += to_string(temp->key);
        s += "->";
        temp = temp->next;
    }

    s += "NULL\n";

    return s;

}

int Queue::pop() {

    int temp = begin->key;
    QUEUE *t = begin;
    begin = begin->next;
    delete t;
    return temp;

}

int Queue::peek() const {
    return begin->key;  //Просто возвращает последний элемент, без выброса его! :)
}

bool Queue::push(int value) {
    QUEUE *p = new QUEUE;
    p->key = value;
    p->next = NULL;

    if(begin == NULL)
    {
        begin = new QUEUE;
        begin = p;
        begin->back = NULL;
    }
    else {
        while (1) {
            if ((begin)->next == NULL) {
                begin->next = p;
                break;
            }
            QUEUE *temp = begin;
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

int Queue::size() const {
    QUEUE *temp = begin;
    int counter = 0;
    while(temp){
        counter++;
        temp = temp->next;
    }
    return counter;
}

bool Queue::isEmpty() const {

    return begin == NULL;

}



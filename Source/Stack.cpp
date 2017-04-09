#include "../Header/Stack.h"
#include <iostream>
#include "string.h"
using namespace std;

string Stack::toString() const {

}

bool Stack::isEmpty() const {
    return next == NULL;
}

int Stack::peek() const {
return next->value;
}

int Stack::pop() {
    int temp = next->value;
    STACK *st = next;
    next = next->next;
    delete st;
    return temp;
}

int Stack::size() const {
    int index = 0;
    STACK *temp = next;
    while(temp){
        temp  = temp->next;
        index++;
        }
    return index;
}

bool Stack::push(int value) {
    STACK *st = new STACK;
    st->value = value;
    st->next = next;
    next = st;
}


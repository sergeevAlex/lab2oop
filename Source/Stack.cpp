#include "../Header/Stack.h"
#include <iostream>
#include "string.h"
using namespace std;
struct STACK
{
int value;
STACK* next;
};

string Stack::toString() const {
    string s;
    STACK *temp = next;
    while(temp != NULL){
        s += to_string(temp->value);
        s += "->";
        temp = temp->next;
        if(temp->next == NULL) break;

    }

    s += "\nNULL";

    return s;

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


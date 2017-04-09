#include "LinkedList.h"
#include <iostream>

char* LinkedList::toString() const {
    LLIST *tmp = next;

    if (tmp == NULL) {
        cout << "EMPTY" << endl;

    }

    if (tmp->next == NULL) {
        cout << tmp->value;
        cout << " --> ";
        cout << "NULL" << endl;
    }
    else {
        do {
            cout << tmp->value;
            cout << " --> ";
            tmp = tmp->next;
        }
        while (tmp != NULL);
        cout << "NULL" << endl;
    }
}
bool LinkedList::isEmpty() const {
    return next == NULL;
}
int LinkedList::pop() { if(next!=NULL)
    {return next->value;}
    else return NULL;}
int LinkedList::peek() const {
    LLIST *tmp = next;
    while(tmp){
        if(tmp->next == NULL){
            return tmp->value;
        }
        else tmp=tmp->next;
    }
}

bool LinkedList::push(int value) {

       if(next != NULL) {
           LLIST *tmp = new LLIST;
           tmp->value = value;
           tmp->next = next;
           next = tmp;
       }
    else {
           next = new LLIST;
           next->value = value;
           next->next = NULL;

       }
}



int  LinkedList::get(int index) const {
    int counter = 0;
    int tmp_data = 0;
    LLIST *tmp2 = next;
    while(tmp2){
        if(index == counter){ tmp_data = tmp2->value; break;}
        else tmp2= tmp2->next;
        counter++;
    }
    return tmp_data;
}
bool LinkedList::insertAt(int index, int value) {
    LLIST *ins = new LLIST;
    ins->value = value;
    if(next == NULL){
        ins->next = NULL;
        next = ins;
        return true;
    }
    LLIST *t = next;
    LLIST *t1 = next;
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

void LinkedList::set(int index, int value) {
    int counter = 0;
    LLIST *tmp = next;
    while(tmp){
        if(index == counter){ tmp->value = value; break;}
        else tmp = tmp->next;
    }

}

int  LinkedList::removeAt(int index) {
    int counter = 0;
    int tmp_data = 0;
    LLIST *tmp2 = next;
        while(tmp2){
            if(index == counter){ tmp_data = tmp2->value; break;}
            else tmp2 = tmp2->next;
            counter++;
        }
        LLIST *tmp = next;
        if(tmp == NULL){
            cout << "Node is empty!" << endl;
            return 0;
        }
        if(tmp->value == tmp_data){
            next = tmp->next;
            delete tmp;
            return 1;
        }

        LLIST *tmp1 = tmp->next;
        while(tmp1)
        {
            if(tmp1->value == tmp_data){
                tmp->next  = tmp1->next;
                delete tmp1;
                return 1;
            }
            tmp = tmp1;
            tmp1 = tmp1->next;
        }
        }

int  LinkedList::size() const {
    int index = 0;
    LLIST *temp = next;
    while(temp){
        temp  = temp->next;
        index++;
    }
    return index;
}
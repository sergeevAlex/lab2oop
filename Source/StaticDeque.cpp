#include "../Header/StaticDeque.h"


string StaticDeque::toString() const{
    string s;
    for(int i =0; i < length; i++){
        s+= to_string(arr[i]);
        s+= "<-->";
    }
}

void swap(int & a, int & b)
{
    int temp = a;
    a = b;
    b = temp;
}

bool StaticDeque::pushFront(int value){
    if(length == MAX) return false;

    for(int i = length -1; i>=0;--i){
        swap(arr[i],arr[i+1]);
        arr[0] = value; ++length;
        return true;
    }
}

bool StaticDeque::pushBack(int value){
    if(length == MAX) return false;

    length++;
    arr[length] = value;
    return true;

}

int StaticDeque::popFront(){}

int StaticDeque::popBack(){
    int res = arr[length];
    arr[length] = NULL;
    length--;
    return res;
}

int StaticDeque::peekFront() const{}

int StaticDeque::peekBack() const{}

int StaticDeque::size() const{}

bool StaticDeque::isEmpty() const{}

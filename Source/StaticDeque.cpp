#include "../Header/StaticDeque.h"


string StaticDeque::toString() const{
    string s;
    for(int i = 0; i < dequeSize-1; i++){
        s+= to_string(arr[i]);
        s+= "<-->";
    }
    s+="Null";
    return s;
}

void swap(int & a, int & b)
{
    int temp = a;
    a = b;
    b = temp;
}

bool StaticDeque::pushFront(int value){
    if(dequeSize == MAX) return false;
    for(int i = dequeSize -1; i>=0;--i){
        swap(arr[i],arr[i+1]);
    }
    arr[0] = value; ++dequeSize;
    return true;
}

bool StaticDeque::pushBack(int value){
    if(dequeSize == MAX) return false;
    dequeSize;
    arr[dequeSize-1] = value;
    ++dequeSize;
    return true;

}

int StaticDeque::popFront(){
    int res1 = arr[0];
    for(int i = 1; i<dequeSize+1;i++){
        swap(arr[i],arr[i-1]);
    }
    return res1;
}

int StaticDeque::popBack(){
    int res = arr[dequeSize-3];
    arr[dequeSize] = NULL;
    --dequeSize;
    return res;
}

int StaticDeque::peekFront() const{
    return arr[0];
}

int StaticDeque::peekBack() const{
    return arr[dequeSize-1];
}

int StaticDeque::size() const{return dequeSize;}

bool StaticDeque::isEmpty() const{
    return dequeSize ==0;
}

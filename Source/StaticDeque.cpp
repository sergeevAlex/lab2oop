#include "../Header/StaticDeque.h"
#include <sstream>

template<typename T>
string StaticDeque<T>::toString() const {
    string s;
//    ostringstream  ostr;
    for(int i = 0; i < dequeSize-1; i++){
        s+= "[";
        s+= to_string(arr[i]);
        s+= "] ";
    }
    return s;
}
template<typename T>
void swapp(T  a, T & b)
{
    T temp = a;
    a = b;
    b = temp;
}
template<typename T>
bool StaticDeque<T>::pushFront(const T& value){
    if(dequeSize == MAX) return false;
    for(int i = dequeSize-1; i>=0; --i){
      swapp(arr[i],arr[i+1]);

//        arr[i+1] = arr[i];
    }

    arr[0] = value; dequeSize++;
    return true;

}

template<typename T>
bool StaticDeque<T>::pushBack(const T& value){
    if(dequeSize == MAX) return false;
    dequeSize++;
    arr[dequeSize] = value;
    return true;
}

template<typename T>
T StaticDeque<T>::popFront(){
    T res1 = arr[0];
    for(int i = 1; i<dequeSize+1;i++){
        swapp(arr[i],arr[i-1]);
    }
    dequeSize--;
    return res1;
}
template<typename T>

T StaticDeque<T>::popBack(){
    T res = arr[dequeSize];
    arr[dequeSize] = {};
    dequeSize--;
    return res;
}
template<typename T>

T StaticDeque<T>::peekFront() const{

    return arr[0];
}
template<typename T>

T StaticDeque<T>::peekBack() const{
    return arr[dequeSize-1];
}
template<typename T>

int StaticDeque<T>::size() const{return dequeSize+1;}
template<typename T>

bool StaticDeque<T>::isEmpty() const{
    return dequeSize ==0;
}
template<typename T>
T& StaticDeque<T>::peekFront() {

}
template<typename T>
T& StaticDeque<T>::peekBack(){
}

template<typename T>
StaticDeque<T>& StaticDeque<T>::operator=(const StaticDeque &sd) {
    MAX = 1000;
    dequeSize = sd.dequeSize;
    arr = new T[dequeSize];
    for(int i = 0;i < dequeSize;i++){
        arr[i] = sd.arr[i];
    }
}

template<typename T>
StaticDeque<T>::StaticDeque(const StaticDeque &sd) {
    MAX = 1000;
    dequeSize = sd.dequeSize;
    arr = new T[dequeSize];
    for(int i = 0;i < dequeSize;i++){
        arr[i] = sd.arr[i];
    }

}
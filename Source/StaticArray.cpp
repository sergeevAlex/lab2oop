#include "../Header/StaticArray.h"
#include <sstream>
//template<typename T>
//string StaticArray<T>::toString() const {
//   string s;
//    ostringstream  ostr;
//    for(int i =0;i<length;i++){
//        ostr << "[" << arr[i] << "] ";
//        s = ostr.str();
//    }
//    return s;
//}

template<typename T>
bool StaticArray<T>::isEmpty() const { return length==0; }

template<typename T>
int StaticArray<T>::size() const { return length;}

template<typename T>
T StaticArray<T>::get(int index) const { return arr[index];}

template<typename T>
void StaticArray<T>::set(int index, const T& value) {
    arr[index] = value;
}
template<typename T>
T& StaticArray<T>::get(int index) { return arr[index]; }

template<typename T>
StaticArray<T>::StaticArray(const StaticArray &sa) {
    MAX = 1000;
    length = sa.length;
    arr = new T[length];
    for(int i = 0;i < length;i++){
        arr[i] = sa.arr[i];
    }
}

template<typename T>
StaticArray<T>& StaticArray<T>::operator=(const StaticArray &sa) {

    MAX = 1000;
    length = sa.length;
    arr = new T[length];
    for(int i = 0;i < length;i++){
        arr[i] = sa.arr[i];
    }
return (*this);
}

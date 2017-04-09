#include "../Header/StaticArray.h"

string StaticArray::toString() const {
   string s;
    for(int i =0;i<length;i++){
        s+= to_string(arr[i]);
        s+= "  ";
    }
    return s;

}

bool StaticArray::isEmpty() const { return length==0; }

int StaticArray::size() const { return length;}

int StaticArray::get(int index) const { return arr[index];}

void StaticArray::set(int index, int value) {
    arr[index] = value;
}

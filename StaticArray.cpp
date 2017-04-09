#include "StaticArray.h"

string StaticArray::toString() const {
   string s;
    for(int i =0;i<lenght;i++){
        s+= to_string(arr[i]);
        s+= "  ";
    }
    return s;

}

bool StaticArray::isEmpty() const { return lenght==0; }

int StaticArray::size() const { return lenght;}

int StaticArray::get(int index) const { return arr[index];}

void StaticArray::set(int index, int value) {
    arr[index] = value;
}

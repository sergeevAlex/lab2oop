#include <iostream>
#include "Header/Stack.h"
#include "Source/Stack.cpp"
#include "Header/LinkedList.h"
#include "Source/LinkedList.cpp"
#include "Header/Queue.h"
#include "Source/Queue.cpp"
#include "Header/StaticArray.h"
#include "Source/StaticArray.cpp"
#include "Header/StaticDeque.h"
#include "Source/StaticDeque.cpp"
using namespace std;
int main() {

    StaticDeque<int> st(0);
    st.pushFront(4525235);
    st.pushFront(1);
    st.pushFront(3425);
    SelectionSort(st);
    cout << st;
    return 0;
}
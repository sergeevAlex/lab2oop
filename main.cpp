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



//
//    LinkedList<string> st;
//    st.push("bsbdbdb");
//    st.push("test");
//    st.push("eleven");
//    st.push("twelve");
////    st.push(22.7);
////    st.push(3535.67);
////    st.push(1.0);
////    st.push(0.777777777);
//    cout << st << endl;
//
//    ContainerInterface<string>* ci = &st;
//    ci->SelectionSort();
//
//    cout << *ci;


    StaticArray<string> st(5);

    st[0] = "Hello!";
    st[1] = "World";

    cout << st << endl;

    st.SelectionSort();

    cout << st;

    StaticArray<string> st1(5);
//    st1[0] = "World";
    st1[1] = "Hello!";
    cout << endl;
    cout << (st1=st);



//    StaticArray<double> st(5);
//
//    st.set(0,1.7);
//    st.set(1,10.25252353252);
//    st.set(2,11.4);
//    st.set(3,11.4);
//    st.set(4,11.0);
//    cout << st << endl;
//
//    st.SelectionSort();
//
//    cout << st << endl;
//
//
//    cout << " ++++++++++ " << endl;
//
//    LinkedList<int> ll;
//    ll.push(2);
//    ll.push(24242);
//    ll.push(1000);
//    ll.push(40);
//    ll.push(0);
//
//    cout << ll << endl;
//
//    ll.SelectionSort();
//
//    cout << ll;

    return 0;
}
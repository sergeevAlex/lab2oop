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

//    Stack<double>* s1 = new Stack<double>();
//    s1->push(2.4);
//    s1->push(25.7);
//    s1->toString();
//    Stack<string>* st = new Stack<string>();
//    st->push("hey");
//    st->push("how are u? ");
//    cout << st->toString();

    /* Stack override '=' testing!  */
//    Stack<double> s1;
//    s1.push(522.8);
//    s1.push(633.9);
//
//      Stack<double> s2;
//
//    s2 = s1;
//
//    s2.toString();


    /* Queue override '=' testing!  */

//    Queue<double> qt;
//    qt.push(26.8);
//    qt.push(27.9);
//
//
////      Queue<double> qt2(qt);
//      Queue<double> qt2;
//
//    qt2 = qt;
//
//
//    qt.push(11);
//
//    cout << qt2 << endl;

//
//LinkedList<double> st;
//
//    st.push(26.8);
//    st.push(27.0);
//    LinkedList<double> st2(st);
//
//    cout << st2;
//    /* StaticArray override '=' testing!  */

//    StaticArray<double> st(10);
//
//    st.set(0,1.6);
//    st.set(1,2.7);
//
////    StaticArray<double> st2(st);
//    StaticArray<double> st2(5);
//    st2 = st;
//    cout << st2.toString();

    /* StaticDeque override '=' testing!  */

//    Stack<string> st;

//    Queue<string> qt;
//
//    qt.push("Hello");
//    qt.push(" World");
//
//    cout << qt;

//    cout << st;

//    StaticDeque<int> st(10);
//    st.pushFront(6);
//    st.pushFront(7);
//    StaticDeque<int> st2(1);
//
////    StaticDeque<int> st2(st);
//
//    st2 = st;
//    st2.toString();


//    StaticArray<int> st(10);
//
//    st.get(0) = 1;
//
//    cout << st;


//    Stack<string> st;
//
//    st.push("Where is your labs?");
//    st.push("LazY!");
//
//    cout << st;

/* IteratorTesting  */
//    Queue<double> st;
//
//    st.push(11);
//
//    st.push(23);
//
//    Queue<double> st1;
//
//    st1.push(11);
//
//    st1.push(23);
//
////    cout << (st == st1);
//
///*    cout << st == st1; */
//
//    auto it =  st1.createIteratorConst();
//
//    cout << st1;


//    while(it->hasNext()){
////        cout << it->Next() << endl;
//    }
//    delete it;

    Stack<string> st;


    st.push("Hello");
    st.push("How are u?");
    st.push("Enjoy it!");

//    cout << st; //реализовать итератор :)
//    LinkedList<double> ll;
//
//    ll.push(22.7);
//    ll.push(36.8);
//    ll.push(22.7);
//
//    LinkedList<double> ll1;
//    ll1 = ll;
//    cout << ll1.toString();

//    LinkedList<double>* l1 = new LinkedList<double>();
//
//    l1->push(1.6);
//    l1->push(2.6);
//
//
// //   cout << l1->get(3);
//     cout << l1->toString();

//
//    LinkedList<string>* l2 = new LinkedList<string>();
//
//
//    l2->push("hi!");
//    l2->push("hello!");
//    l2->push("Good morning!");
//
//  //  l2->set(1,"sgsdgsdgsd");++
// //   l2->insertAt(1,"kek"); ++
//
//    cout << l2->toString();


//    Queue<double> qd;
//
//    qd.push(28.9);
//    qd.push(23.7);
//
//     cout << qd;

//    StaticDeque<double> sd(3);
//
//    sd.pushFront(26);
//    sd.pushFront(26);
//    sd.pushFront(26);
//
//
//    cout << sd;

//    StaticArray<string>* st = new StaticArray<string>(10); ++
//
//    st->set(0,"SomeInfo");
//    st->set(1,"Mother");
//    cout << st->toString();

//    StaticDeque<string>* st = new StaticDeque<string>(10);++
//
//    st->pushFront("Hello");
//    st->pushFront("How are u?");
//
//    st->toString();

    return 0;
}
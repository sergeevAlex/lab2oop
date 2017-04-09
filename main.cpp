#include <iostream>
#include "Stack.h"
#include "LinkedList.h"
using namespace std;

int main() {
    PushPopContainerInterface* arr1[5];
    IndexedContainerInterface* arr2[3]; //How to check removeAt?!
    arr1[0] = new Stack();
    arr2[0] = new LinkedList();

//    for(int i =0;i<10;i++){
//        arr1[0]->push(i+1);
//    }
//    cout << arr1[0]->isEmpty() << endl;
//    cout << "Peek: " << arr1[0]->peek() << endl;
//    cout << "Size: " << arr1[0]->size() << endl;


    arr1[1] = new LinkedList();
    arr1[1]->push(1);
    arr1[1]->push(5);
    arr1[1]->push(7);
    arr1[1]->push(9);

    LinkedList *ls = new LinkedList;
    ls->push(2);
    ls->push(4);
    ls->push(6);
    ls->push(7);
    ls->push(9);

    cout << ls->pop();

    ls->toString();
//    arr1[1]->toString();


    return 0;
}
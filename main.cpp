#include <iostream>
#include "Header/Stack.h"
#include "Header/LinkedList.h"
#include "Header/Queue.h"
#include "Header/StaticArray.h"
#include "Header/StaticDeque.h"

using namespace std;

int main() {

//    ContainerInterface* arr[3];
//    arr[0] = new StaticArray(10);
//    arr[1] = new Queue();
//    arr[2] = new LinkedList();
//
//
//
//    for(int i =0;i<5; i++){
////        arr[0]->
//        for(int j=0;j<3;j++){
//        PushPopContainerInterface* PushPop = dynamic_cast<PushPopContainerInterface*>(arr[j]);
//        if(PushPop != nullptr){
//            PushPop->push(i);
//        }
//        }
//    }
//
//    for(int i =0;i<3;i++){
//      cout <<   arr[i]->toString() << endl;
//
//    }
//
//    for(int i =0;i<3;i++){
//        PushPopContainerInterface* PushPop = dynamic_cast<PushPopContainerInterface*>(arr[i]);
//        if(PushPop != nullptr){
//cout << PushPop->pop() << endl;        }
//
//    }
//
//    for(int i =0;i<3;i++){
//        IndexedContainerInterface* PushPop = dynamic_cast<IndexedContainerInterface*>(arr[i]);
//        if(PushPop != nullptr){
//           PushPop->set(1,100);
//
//       cout << PushPop->get(1) << endl;}
//
//
//    }
//
//    for(int i =0;i<3;i++){
//        cout <<   arr[i]->toString() << endl;
//
//    }
//




    PushPopContainerInterface* ArrPushPop[3];
//    IndexedContainerInterface* ArrIndexed[3]; //How to check removeAt?!
    DequeInterface* DequeArr[3];
    ArrPushPop[0] = new Stack();
//    ArrIndexed[1] = new StaticArray(140);
//    ArrPushPop[2] = new Queue();
//    ArrIndexed[0] = new LinkedList();
    DequeArr[0] = new StaticDeque(5);
//
//    for(int i =0;i<10;i++){
//        ArrPushPop[0]->push(i+1);
//    }
//    cout << ArrPushPop[0]->isEmpty() << endl;
//
//    ArrPushPop[0]->toString();
////    cout << "Peek: " << ArrPushPop[0]->peek() << endl;
////    cout << "Size: " << ArrPushPop[0]->size() << endl;
//
//
////    ArrPushPop[1] = new LinkedList();
////    ArrPushPop[1]->push(1);
////    ArrPushPop[1]->push(5);
////    ArrPushPop[1]->push(7);
////    ArrPushPop[1]->push(9);
//
//
////    LinkedList *ls = new LinkedList;
////    ls->push(2);
////    ls->push(4);
////    ls->push(6);
////    ls->push(7);
////    ls->push(9);
////    cout << ls->pop();
////    ls->toString();
////    ArrPushPop[1]->toString();
//
//
//    ArrPushPop[2]->push(1);
//    ArrPushPop[2]->push(2);
//    ArrPushPop[2]->push(3);
//    ArrPushPop[2]->push(4);
//    ArrPushPop[2]->push(5);
//    ArrPushPop[2]->push(6);
//
//    cout << ArrPushPop[2]->toString();
//
//    cout << ArrPushPop[2]->pop() << endl;
//
//    cout << ArrPushPop[2]->toString();
//
////    cout << "SIze is: " << ArrPushPop[2]->size();
//
//    ArrIndexed[1]->set(0,1);
//    ArrIndexed[1]->set(1,5);
//    ArrIndexed[1]->set(2,6);
//    ArrIndexed[1]->set(3,8);
//    ArrIndexed[1]->set(4,9);
//
//
////    cout << "Size: " << ArrIndexed[1]->size() << endl;
////    cout <<    ArrIndexed[1]->toString() << endl;
//


//    ArrPushPop[0]->push(1);
//    ArrPushPop[0]->push(2);
//    ArrPushPop[0]->push(3);
//    ArrPushPop[0]->push(4);
//    ArrPushPop[0]->push(5);
//
//   cout << ArrPushPop[0]->toString();

    cout << "STATICDEQUE : :: : :: : :: : :: : " << endl;

//    DequeArr[0]->pushFront(1);
//    DequeArr[0]->pushFront(2);
//    DequeArr[0]->pushFront(3);
//    DequeArr[0]->pushFront(4);
//    DequeArr[0]->pushFront(5);

//
//    DequeArr[0]->pushBack(100);
//    DequeArr[0]->pushBack(200);
//    DequeArr[0]->pushBack(300);
//  cout << DequeArr[0]->popBack(); +
//    cout << DequeArr[0]->peekFront(); +
//    cout << DequeArr[0]->popFront();


//      cout <<  DequeArr[0]->toString() << endl;
//    cout << DequeArr[0]->size();
//    cout <<  DequeArr[0]->isEmpty();
//    cout << "popFront: "  << DequeArr[0]->popFront() << endl;
//    cout <<  DequeArr[0]->toString() << endl;
//    ArrIndexed[0]->

    for(int i = 0;i < 5;i++){
        DequeArr[0]->pushFront(i);

    }

    for(int i =0;i  <5 ;i++){
        DequeArr[0]->pushBack(i);

    }

    cout << DequeArr[0]->toString() << endl;


  while(!DequeArr[0]->isEmpty()){

       DequeArr[0]->popFront();
  }


    cout << DequeArr[0]->toString();


    return 0;
}
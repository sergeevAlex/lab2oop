#ifndef LAB2OOP_CONTAINERINTERFACE_H
#define LAB2OOP_CONTAINERINTERFACE_H
#include <sstream>
#include <iostream>
#include <string.h>
#include "stdio.h"
#include "JavaIteratorInterface.h"
using namespace std;

template <typename T>
class ContainerInterface {
public:   virtual int size() const = 0;
          virtual bool isEmpty() const {
                    return size() == 0;
          }
        friend ostream& operator<<(ostream& os, const ContainerInterface<T>& ci) {
            os << ci.toString();
        return os;
         }
        friend class JavaIteratorInterface<T>;
        virtual JavaIteratorInterface<const T&>* createIteratorConst() const = 0;
    typedef JavaIteratorInterface<T> iterator;
    typedef JavaIteratorInterface<const T&> const_iterator;
    typedef T value_type;

    virtual JavaIteratorInterface<T&>* createIterator() = 0;

        friend bool operator==(const ContainerInterface& c1,const ContainerInterface& c2){
            JavaIteratorInterface<const T&>* iterator1 = c1.createIteratorConst();
            JavaIteratorInterface<const T&>* iterator2 = c2.createIteratorConst();

            while(iterator1->hasNext() && iterator2->hasNext()){
                if(iterator1->Next() == iterator2->Next()) continue;
                else{return false;}
            }
            return true;
        }




        virtual string toString() const {
            string s;
            ostringstream ostr;
            JavaIteratorInterface<const T &> *iterator = createIteratorConst();
            while (iterator->hasNext()) {
                ostr << "[" << iterator->Next() << "] ";
                s = ostr.str();
            }
            delete iterator;
            return s;
        }
    virtual ~ContainerInterface(){};
};





template<typename ContainerInterface>
ContainerInterface& Swap(int index1,int index2,ContainerInterface& ci){
//            JavaIteratorInterface<const T&>* iterator3 = this->createIteratorConst();
//            JavaIteratorInterface<T&>* iterator2 = this->createIterator();
    auto iterator3 = typename ContainerInterface::iterator(ci);
    auto iterator2 = typename ContainerInterface::iterator(ci);
    int i = 0;
    typename ContainerInterface::value_type cur1;
    typename ContainerInterface::value_type cur2;
    while(iterator3.hasNext()) {
        auto test = iterator3.Next();
        if (index1 == i) {
            cur1 = test;
        }
        if (index2 == i) {
            cur2 = test;
        }
        i++;
    }

    int j = 0;
    if(index1 == 0){
        iterator2.Next() = cur2;
        while(iterator2.hasNext()){
            if(index2-1 == j){
                iterator2.Next() = cur1;
                break;
            }
            iterator2.Next();
            j++;
        }
    }
    else {
        while(iterator2.hasNext()){
            typename ContainerInterface::value_type test = iterator2.Next();
            if(index1-1 == j){
                iterator2.Next() = cur2;
            }
            if(index2-2== j){
                iterator2.Next() = cur1;
            }
            j++;
        }
    }
    //  delete iterator2;
    return ci;
}



template<typename ContainerInterface>
void SelectionSort(ContainerInterface& ci){
    int ssize = ci.size();
    for(int i = 0; i < ssize; i++){
        auto iterator1 = typename ContainerInterface::iterator(ci);
        int maxIndex = i;
        typename ContainerInterface::value_type el;
        for(int k=0; k < i+1;k++){
            el = iterator1.Next();
        }
        for(int j = i+1; j < ssize;j++){
            typename ContainerInterface::value_type temp = iterator1.Next();
            if(el < temp){
                maxIndex = j;
                el = temp;
            }
        }
        if(i == maxIndex){ continue;}else{
       Swap<ContainerInterface>(i,maxIndex,ci); }
       // delete iterator1;
    }


}

#endif //LAB2OOP_CONTAINERINTERFACE_H
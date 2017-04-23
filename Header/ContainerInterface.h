#ifndef LAB2OOP_CONTAINERINTERFACE_H
#define LAB2OOP_CONTAINERINTERFACE_H
#include <iostream>
#include <string.h>
#include "stdio.h"
using namespace std;

class ContainerInterface {

public:   virtual int size() const = 0;
          virtual bool isEmpty() const {
                    return size() == 0;
          }

        friend ostream& operator<<(ostream& os, const ContainerInterface& ci){
         os << ci.toString();
        return os;
         }

        friend bool operator==(const ContainerInterface& c1,const ContainerInterface& c2){
            return c1==c2; //Contains the equals elements
        }

        virtual string toString() const = 0;
        virtual ~ContainerInterface(){};
};


#endif //LAB2OOP_CONTAINERINTERFACE_H
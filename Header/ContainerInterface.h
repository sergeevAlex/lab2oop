#ifndef LAB2OOP_CONTAINERINTERFACE_H
#define LAB2OOP_CONTAINERINTERFACE_H
#include <iostream>
#include <string.h>
#include "stdio.h"

using namespace std;

class ContainerInterface {
public:   virtual int size() const = 0;
     virtual bool isEmpty() const = 0;
     virtual string toString() const = 0;
     virtual ~ContainerInterface(){};
};

#endif //LAB2OOP_CONTAINERINTERFACE_H

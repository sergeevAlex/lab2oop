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

        friend ostream& operator<<(ostream& os, const ContainerInterface& ci){
            os << ci.toString();
        return os;
         }

        friend class JavaIteratorInterface<T>;

        virtual JavaIteratorInterface<const T&>* createIteratorConst() const = 0;
        virtual JavaIteratorInterface<T&>* createIterator() = 0;
        inline JavaIteratorInterface<const T&>* createIterator() const {
            return createIteratorConst();
        }



        friend bool operator==(const ContainerInterface& c1,const ContainerInterface& c2){
            JavaIteratorInterface<const T&>* iterator1 = c1.createIterator();
            JavaIteratorInterface<const T&>* iterator2 = c2.createIterator();

            while(iterator1->hasNext() && iterator2->hasNext()){
                if(iterator1->Next() == iterator2->Next()) continue;
                else{return false;}
            }
            return true;
        }

        virtual string toString() const {
            string s;
            ostringstream ostr;
            JavaIteratorInterface<const T &> *iterator = createIterator();
            while (iterator->hasNext()) {
                ostr << "[" << iterator->Next() << "] ";
                s = ostr.str();
            }
            return s;
        }

    /*<T>
     *  T max(Container<T> const& c) {
     *
     *      Iterator<const &T *it = c.createIterator();
     *      if(it->hasNext){
     *      T m = c->next();
     *      while(it->hasNext){
     *      T const& el = it->Next();
     *      if(el > m) m = e;
     *      }
     *     }
     *
     *     delete it;
     *     return m;
     *
     *      }
     *      }
     *
     *  }
     *
     * */



    virtual ~ContainerInterface(){};
};


#endif //LAB2OOP_CONTAINERINTERFACE_H
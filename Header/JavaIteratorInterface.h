#ifndef LAB2OOP_JAVAITERATORINTERFACE_H
#define LAB2OOP_JAVAITERATORINTERFACE_H


template<typename T>
class JavaIteratorInterface {
public:
    virtual T next() = 0;
    virtual bool hasNext() const = 0;
    virtual ~JavaIteratorInterface(){}
};


#endif //LAB2OOP_JAVAITERATORINTERFACE_H

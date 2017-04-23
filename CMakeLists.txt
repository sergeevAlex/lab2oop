cmake_minimum_required(VERSION 3.5)
project(lab2oop)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Header/ContainerInterface.h Header/PushPopContainerInterface.h Header/DequeInterface.h Header/IndexedContainerInterface.h Header/InsertableContainerInterface.h Header/Stack.h Source/Stack.cpp Header/LinkedList.h Source/LinkedList.cpp Header/Queue.h Source/Queue.cpp Header/StaticArray.h Source/StaticArray.cpp Header/StaticDeque.h Source/StaticDeque.cpp Header/JavaIteratorInterface.h)
add_executable(lab2oop ${SOURCE_FILES} Header/LinkedList.h)
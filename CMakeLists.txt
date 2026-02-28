cmake_minimum_required(VERSION 4.1)
project(CircularLinkedList_Ptr_v01)

set(CMAKE_CXX_STANDARD 20)

add_executable(CircularLinkedList_Ptr_v01 main.cpp
        CircularLinkedList.cpp
        CircularLinkedList.h)

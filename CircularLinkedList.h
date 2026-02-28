//
// Created by cbalb on 28/02/2026.
//

#ifndef CIRCULARLINKEDLIST_PTR_V01_CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_PTR_V01_CIRCULARLINKEDLIST_H
#include <memory>
using namespace std;



class CircularLinkedList {
private:
    struct Node {
        int value;
        shared_ptr<Node> ptr_Next;

        Node(int v);                            //Constructor por defecto
        Node(int v, shared_ptr<Node> node);     //Constructor con parametros
    };

    //Usamos ptr_Tail ya que este apunta al ultimo, pero el ptr_Tail->ptr_Next es el head
    shared_ptr<Node> ptr_Tail;
    int size=0;
public:
    bool empty();
    void push_front(int v);
    void push_back(int v);
    void pop_front();
    void pop_back();
    void erase();
    int front();
    int back();
};


#endif //CIRCULARLINKEDLIST_PTR_V01_CIRCULARLINKEDLIST_H
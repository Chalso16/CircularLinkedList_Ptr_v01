//
// Created by cbalb on 28/02/2026.
//

#include "CircularLinkedList.h"
#include <iostream>
//#include <memory>
using namespace std;

CircularLinkedList::Node::Node(int v) {
    this->value=v;
    this->ptr_Next=nullptr;
}

CircularLinkedList::Node::Node(int v, shared_ptr<Node> node) {
    this->value=v;
    this->ptr_Next=node;
}

bool CircularLinkedList::empty() {
    if (ptr_Tail==nullptr) {
        cout << "Lista vacia"<<endl;
        return true;
    }
    else {
        cout << "Lista No vacia"<<endl;
        return false;
    }
}

void CircularLinkedList::push_front(int v) {
    shared_ptr<Node> ptr_New = make_shared<Node>(v);
    if (ptr_Tail==nullptr) {
        ptr_Tail=ptr_New;                       //Asignacion ptrTail
        ptr_Tail->ptr_Next=ptr_New;             //Asignacion al Head el puntero nuevo
    }
    else {
        ptr_New->ptr_Next=ptr_Tail->ptr_Next;
        ptr_Tail->ptr_Next=ptr_New;             //ptr_Tail->ptr_Next = head
    }
    sizeCircularLikedList++;


}


void CircularLinkedList::push_back(int v) {
    shared_ptr<Node> ptr_New = make_shared<Node>(v);
    if (ptr_Tail==nullptr) {
        ptr_Tail=ptr_New;                       //Asignacion ptrTail
        ptr_Tail->ptr_Next=ptr_New;             //Asignacion al Head el puntero nuevo
    }
    else {
        ptr_New->ptr_Next=ptr_Tail->ptr_Next;   //Hacemos que el ptrNuevo->Next apunte al head
        ptr_Tail->ptr_Next = ptr_New;           //Head antiguo es ahora el ptrNuevo
        ptr_Tail=ptr_New;                       //Igualamos el tail al nuevoPtr
    }
    sizeCircularLikedList++;
}

void CircularLinkedList::pop_front() {
    if (ptr_Tail==nullptr) {
        return;
    }
    ptr_Tail->ptr_Next = ptr_Tail->ptr_Next->ptr_Next;
    sizeCircularLikedList--;
}

int CircularLinkedList::front() {
    return ptr_Tail->ptr_Next->value;
}

int CircularLinkedList::back() {
    return ptr_Tail->value;
}

/*  =========================================
    == Para implementar el pop_back hay que ==
    ==        recorrer toda la lista        ==
    ==========================================  */

// void CircularLinkedList::pop_back() {
//     if (ptr_Tail==nullptr) {
//         return;
//     }
// }

void CircularLinkedList::print() {
    if (ptr_Tail==nullptr) {
        return;
    }
    shared_ptr<Node> ptr_Curr = ptr_Tail->ptr_Next;
    cout << "\nLista circular: ";
    while (ptr_Curr!=ptr_Tail) {            //Recorremos hasta llegar al tail(ultimo)
        cout<<ptr_Curr->value<<" ";         //Imprimimos valor
        ptr_Curr=ptr_Curr->ptr_Next;        //Actualizamos curr a el siguiente puntero (curr->next)
    }
    cout << ptr_Tail->value << endl;        //Imprimimos el tail ya que nunca llegamos a hacerlo en el bucle
}

int CircularLinkedList::size() {
    return sizeCircularLikedList;
}

#include <iostream>

#include "CircularLinkedList.h"

int main() {
    std::cout << "Hello, World!\n" << std::endl;

    CircularLinkedList lista;
    lista.empty();
    lista.push_front(40);
    lista.push_front(30);
    lista.push_front(20);
    lista.push_front(10);
    lista.push_front(5);
    lista.empty();

    lista.print();
    cout <<"Elemento front: "<< lista.front()<<endl;
    cout <<"Elemento back: "<< lista.back()<<endl;
    cout << "El size de la lista es: "<<lista.size();
    lista.pop_front();
    lista.print();
    cout <<"Elemento front: "<< lista.front()<<endl;
    cout <<"Elemento back: "<< lista.back()<<endl;
    cout << "El size de la lista es: "<<lista.size();
    return 0;
}

#include <iostream>

#include "CircularLinkedList.h"

int main() {
    std::cout << "Hello, World!\n" << std::endl;

    CircularLinkedList lista;

    lista.push_front(40);
    lista.push_front(30);
    lista.push_front(20);
    lista.push_front(10);
    lista.push_front(5);

    cout << lista.front();
    cout << lista.back();
    return 0;
}

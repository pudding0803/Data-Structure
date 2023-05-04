#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"

template<typename T>
class LinkedList {
public:
    LinkedList();
    void printList();
    void insertNode(T, int);
private:
    Node<T> *head;
};

#include "LinkedList.tpp"

#endif

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"

template<typename T>
class LinkedList {
public:
    LinkedList();
    int size();
    void print();
    T get(int);
    void append(T);
    void insert(T, int);
private:
    Node<T> *head;
    Node<T> *getNodeAtIndex(int);
};

#include "LinkedList.tpp"

#endif

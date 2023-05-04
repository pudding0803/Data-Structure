#include <iostream>
#include "LinkedList.h"
#include "Node.h"

using namespace std;

template<typename T>
LinkedList<T>::LinkedList() {
    this->head = nullptr;
};

template<typename T>
void LinkedList<T>::printList() {
    Node<T> *node = this->head;
    while (node != nullptr) {
        cout << node->getData() << " ";
        node = node->getNext();
    }
    cout << endl;
}

template<typename T>
void LinkedList<T>::insertNode(T data, int pos) {
    if (pos == 0) {
        this->head = new Node<T>(data);
    } else {
        Node<T> *node = head;
        for (int i = 0; i < pos; i++) {
            node = node->getNext();
        }
        Node<T> *newNode = new Node<T>(data, node->getNext());
        node->setNext(newNode);
    }
}

#include <iostream>
#include <stdexcept>
#include "LinkedList.h"
#include "Node.h"

using namespace std;

template<typename T>
LinkedList<T>::LinkedList() {
    this->head = nullptr;
};

template<typename T>
int LinkedList<T>::size() {
    int size = 0;
    Node<T> *node = this->head;
    while (node) {
        size++;
        node = node->next;
    }
    return size;
}

template<typename T>
void LinkedList<T>::print() {
    cout << "[";
    if (this->head) {
        cout << " " << this->head->data;
        Node<T> *node = this->head->next;
        while (node) {
            cout << " -> " << node->data;
            node = node->next;
        }
    }
    cout << " ]" << endl;
}

template<typename T>
T LinkedList<T>::get(int index) {
    return this->getNodeAtIndex(index)->data;
}

template<typename T>
void LinkedList<T>::append(T data) {
    if (!this->head) {
        this->head = new Node<T>(data);
    } else {
        Node<T> *node = head;
        while (node->next) {
            node = node->next;
        }
        node->next = new Node<T>(data, node->next);
    }
}

template<typename T>
void LinkedList<T>::insert(T data, int index) {
    if (!this->head) {
        this->head = new Node<T>(data);
    } else if (index == 0) {
        this->head = new Node<T>(data, this->head);
    } else {
        Node<T> *node = this->getNodeAtIndex(index - 1);
        Node<T> *newNode = new Node<T>(data, node->next);
        node->next = newNode;
    }
}

template<typename T>
Node<T> *LinkedList<T>::getNodeAtIndex(int index) {
    Node<T> *node = this->head;
    for (int i = 0; i < index; i++) {
        if (!node->next) throw out_of_range("Index out of range.");
        node = node->next;
    }
    return node;
}

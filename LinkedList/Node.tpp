#include "Node.h"

template<typename T>
Node<T>::Node() {}

template<typename T>
Node<T>::Node(T data, Node<T> *next) {
    this->data = data;
    this->next = next;
}

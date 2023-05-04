#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    LinkedList<int> list;
    list.insertNode(100, 0);
    list.printList();
    return 0;
}

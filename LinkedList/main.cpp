#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    LinkedList<int> list;
    list.append(200);
    list.insert(300, 1);
    list.insert(100, 0);
    list.append(400);
    list.print();
    return 0;
}

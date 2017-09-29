#include <iostream>
#include "intSLList.h"

using namespace std;

int main(void) {

    IntSLList *list = new IntSLList();

    list->addToHead(20);
    list->addToTail(10);

    list->deleteFromTail();
    list->deleteFromHead();

    int b = list->isInList(20);

    printf("%d \n", b);
    return 0;
}

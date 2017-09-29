#ifndef DSAA_INTSLLIST_H
#define DSAA_INTSLLIST_H

#include "intSLLNode.h"

class IntSLList {
public:
    IntSLList();

    ~IntSLList();

    int isEmpty();

    void addToHead(int);

    void addToTail(int);

    int deleteFromHead();

    int deleteFromTail();

    void deleteNode(int);

    bool isInList(int) const;

private:
    IntSLLNode *head, *tail;

};

#endif //DSAA_INTSLLIST_H

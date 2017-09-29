#include "intSLList.h"
#include "intSLLNode.h"

IntSLList::IntSLList() {
    head = tail = 0;
}

IntSLList::~IntSLList() {
    for (IntSLLNode *p; !isEmpty();) {
        p = head->next;
        delete head;
        head = p;
    }
}

int IntSLList::isEmpty() {
    return head == 0;
}

void IntSLList::addToHead(int el) {
    head = new IntSLLNode(el, head);
    if (tail == 0)
        tail = head;
}

void IntSLList::addToTail(int el) {
    if (tail != 0) {
        tail->next = new IntSLLNode(el);
        tail = tail->next;
    } else {
        tail = head = new IntSLLNode(el);
    }
}

int IntSLList::deleteFromHead() {
    if (tail == 0 || head == 0) {
        return 0;
    } else {
        int el = head->info;
        IntSLLNode *tmp = head;
        head = head->next;
        delete tmp;
        return el;
    }
}

int IntSLList::deleteFromTail() {
    if (tail == 0 || head == 0) {
        return 0;
    } else {
        IntSLLNode *tmp = head;
        int el = tail->info;
        while (tmp != tail) {
            if (tmp->next == tail) {
                IntSLLNode *tmp1 = tail;
                tmp->next = 0;
                tail = tmp;
                delete tmp1;
            } else {
                tmp = tmp->next;
            }
        }
        return el;
    }
}

void IntSLList::deleteNode(int el) {
    if (head != 0) {
        if (head == tail && el == head->info) {
            delete head;
            head = tail = 0;
        } else if (el == head->info) {
            IntSLLNode *tmp;
            head = head->next;
            delete tmp;
        } else {
            IntSLLNode *pred, *tmp;
            for (pred = head, tmp = head->next;
                 tmp != 0 && !(tmp->info == el);
                 pred = pred->next, tmp = tmp->next
                    ) {

                if (tmp != 0) {
                    pred->next = tmp->next;
                    if (tmp == tail) {
                        tail = pred;
                        delete tmp;
                    }
                }
            }
        }
    }
}

bool IntSLList::isInList(int el) const {
    // 一个数据没有
    if (head == 0) {
        return false;
    }
    // 有一个数据
    if (head->next == 0) {
        if (head->info == el) {
            return true;
        } else {
            return false;
        }
    }

    // 至少两个数据
    IntSLLNode *tmp = head;
    while (tmp) {
        if (tmp->info == el) {
            return true;
        }
        tmp = tmp->next;
    }

    return false;
}
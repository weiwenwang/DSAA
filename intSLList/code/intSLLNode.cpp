//
// Created by 汪威文 on 2017/9/29.
//

#include "intSLLNode.h"

IntSLLNode::IntSLLNode() {
    next = 0;
}

IntSLLNode::IntSLLNode(int el, IntSLLNode *ptr ) {
    info = el;
    next = ptr;
}
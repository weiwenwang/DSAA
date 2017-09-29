//
// Created by 汪威文 on 2017/9/29.
//

#ifndef DSAA_INTSLLNODE_H
#define DSAA_INTSLLNODE_H

class IntSLLNode {
public:
    IntSLLNode();

    IntSLLNode(int el, IntSLLNode *ptr = 0);


    int info;
    IntSLLNode *next;
};

#endif //DSAA_INTSLLNODE_H

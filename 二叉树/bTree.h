#ifndef _BTREE_
#define _BTREE_

typedef struct node {
	struct node *left;
	struct node *right;
	int data;
} Node;

typedef struct Btree {
	Node *root_node;
	int node_count;
} Btree;

// 初始化节点
Node* initNode(int data);
// 初始化二叉树
Btree* initBtree(int data);

// insertNode
void insertNode(Node* node, int data);

// 插入一个节点
void insertNodeToBtree(Btree *btree, int data);

// type 1(前), 2(后), 3(中)
void echoNode(Node* node, int type);

void echoBtree(Btree* btree, int type);

int searchNode(Node *node, int data);

int searchNodeFromBtree(Btree *btree, int data);


#endif

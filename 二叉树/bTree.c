#include <stdlib.h>
#include <stdio.h>

#include "bTree.h"

// 初始化节点
Node* initNode(int data) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->left = node->right = NULL;
	node->data = data;
	return node;
}
// 初始化二叉树
Btree* initBtree(int data) {
	Btree *btree = (Btree *)malloc(sizeof(Btree));
	btree->root_node = initNode(data);
	btree->node_count = 1;
	return btree;
}

// insertNode
void insertNode(Node* node, int data) {
	if (node->data > data) {
		if (node->left == NULL) {
			Node *node_data = initNode(data);
			node->left = node_data;
		} else {
			insertNode(node->left, data);
		}
	} else {
		if (node->right == NULL) {
			Node *node_data = initNode(data);
			node->right = node_data;
		} else {
			insertNode(node->right, data);
		}
	}
}

// 插入一个节点
void insertNodeToBtree(Btree *btree, int data) {
	if (btree->node_count == 0) {
		btree->node_count = 1;
		btree->root_node = initNode(data);
	} else {
		insertNode(btree->root_node, data);
	}
}

// type 1(前), 2(后), 3(中)
void echoNode(Node* node, int type) {
	switch(type) {
		case 1: // 前序
			printf("%d\n", node->data);
			if (node->left != NULL) {
				echoNode(node->left, type);
			}

			if (node->right != NULL) {
				echoNode(node->right, type);
			}
			break;
		case 2: // 中序
			if (node->left != NULL) {
				echoNode(node->left, type);
			}

			printf("%d\n", node->data);

			if (node->right != NULL) {
				echoNode(node->right, type);
			}
			break;
		case 3: // 后序
			if (node->left != NULL) {
				echoNode(node->left, type);
			}

			if (node->right != NULL) {
				echoNode(node->right, type);
			}

			printf("%d\n", node->data);
			break;
	}
}

void echoBtree(Btree* btree, int type) {
	echoNode(btree->root_node, type);
}

// 链表中查找某个特定的元素
int searchNode(Node *node, int data) {
	if (node->data == data) {
		return 1;
	} else {
		if (node->data > data) {
			if (node->left != NULL) {
				return searchNode(node->left, data);
			} else {
				return 0;
			}
		} else {
			if (node->right != NULL) {
				return searchNode(node->right, data);
			} else {
				return 0;
			}
		}
	}
}

// 链表中查找某个特定的元素
int searchNodeFromBtree(Btree *btree, int data) {
	return searchNode(btree->root_node, data);
}

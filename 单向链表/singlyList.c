#include <stdio.h>
#include <stdlib.h>

#include "singlyList.h"

// 初始化一个链表
List* initList() {
	List * list = (List *)malloc(sizeof(List));
	list->count = 0;
	list->head = NULL;
	list->tail = NULL;

	return list;
}

// 初始化某个节点
Node* initNode(int data) {
	Node* node = (Node *)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	return node;
}

// 插入一个节点
void insertNode(List *list, int data) {
	Node* node = initNode(data);
	if (list->count == 0) { // 第一个元素
		list->head = list->tail = node;
		list->count = 1;
	} else { // 非第一个元素
		list->tail->next = node;
		list->tail = node;
		list->count++;
	}
}

// 插入一个头节点
void inserthead(List *list, int data) {
	Node *node = initNode(data);
	node->next = list->head;
	list->head = node;
	list->count++;
}

// 插入一个尾节点
void inserttail(List *list, int data) {
	Node *node = initNode(data);
	list->tail->next = node;
	node->next = node;
}

// 删除一个头节点
void deletehead(List *list) {
	if (list->count == 0) { // 没有值
		return;
	} else if(list->count == 1){
		free(list->head);
		list->head = list->tail = NULL;
	} else {
		Node *node = list->head->next; // 把第二个节点提取出来
		free(list->head); // 把第一个节点释放掉
		list->head = node; // 把第二个编程第一个
	}
}

// 删除一个尾节点
// void deletetail(List *list) {
// 	if (list->count == 0) { // 没有值
// 		return;
// 	} else if(list->count == 1){
// 		Node *node = list->tail;
// 		free(node);
// 		list->head = list->tail = node;

// 	} else {
// 		Node *node = list->tail->next;
// 		list->tail = node;
// 		free(node);
// 	}
// }

void deleteList(List *list) {
	do {
		Node *node = list->head;
		if (node->next == NULL) {
				free(node);
				list->head = list->tail = NULL;
				list->count--;
		} else {
			list->head = node->next;
			free(node);
			list->count--;
		}
	} while(list->head != NULL);
}

// 打印链表里面的每一个值
void echoList(List *list) { // 打印的时候不能改变list指针的位置
	List *tmp_list = list;
	if (tmp_list->count == 0) {
		printf("list is empty\n");
	} else {
		Node *tmp_node = tmp_list->head;
		do {
			printf("%d\n", tmp_node->data);
			tmp_node = tmp_node->next;
		} while(tmp_node != NULL);
	}
}

// 判断链表包含某个特定值
int isInList(List *list, int data) {
	if (list->count == 0) {
		return 0;
	}
	Node *node = list->head;
	do {
		if (node->data == data) {
			return 1;
		}
		node = node->next;
	} while(node != NULL);
	return 0;
}

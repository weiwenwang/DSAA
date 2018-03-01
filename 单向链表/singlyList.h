#ifndef _SINGLYLIST_
#define _SINGLYLIST_

typedef struct node {
	int data;
	struct node *next;
} Node;


typedef struct list {
	int count;
	Node* head;
	Node* tail;
} List;

// 初始化一个链表
List* initList();

// 初始化某个节点
Node* initNode(int data);

// 插入一个节点
void insertNode(List *list, int data);

// 插入一个头节点
void inserthead(List *list, int data);

// 插入一个尾节点
void inserttail(List *list, int data);

// 删除一个头节点
void deletehead(List *list);

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

void deleteList(List *list);

// 打印链表里面的每一个值
void echoList(List *list);

// 判断链表包含某个特定值
int isInList(List *list, int data);

#endif

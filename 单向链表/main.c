#include <stdio.h>

#include "singlyList.h"

int main(int argc, char** argv) {
	printf("%s\n", "niaho");

	List *list = initList();
	insertNode(list, 10);
	insertNode(list, 20);
	insertNode(list, 30);
	inserthead(list, 9);

	echoList(list);

	// deleteList(list);
	//
	if (list->head != NULL) {
		printf("list header is %d\n", list->head->data);
	} else {
		printf("list header is NULL\n");
	}

	if (list->head != NULL) {
		printf("list tail is %d\n", list->tail->data);
	} else {
		printf("list tail is NULL\n");
	}

	// if (list->head != NULL) {
	// 	printf("list header is %d\n", list->head->data);
	// } else {
	// 	printf("list header is NULL\n");
	// }
	// printf("list tail is %d\n", list->tail->data);
	printf("list count is %d\n", list->count);
	//
	// int is_in = isInList(list, 11);
	//
	// printf("is_in is %d\n", is_in);
	// echoList(list);
	// printf("链表元素个数: %d\n", list->count);



	return 0;
}

#include <stdio.h>

#include "bTree.h"

int main(int argc, char** argv) {
	printf("%s\n", "niaho");

	Btree *btree = initBtree(20);

	insertNodeToBtree(btree, 30);
	insertNodeToBtree(btree, 9);

	echoBtree(btree, 1);
	printf("%d\n", searchNodeFromBtree(btree, 9));
	printf("%s\n", "hello world");


	return 0;
}

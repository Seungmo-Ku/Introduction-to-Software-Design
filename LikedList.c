#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	struct node* address;
} Node;
Node* insertNode (Node* first, int index, int data) {
	int i = 0;
	if (index == 0) {
		Node* second = (Node *)malloc(sizeof(Node));
		first = second;
		second->data = data;
		printf ("%d\n", second->data);
		second->address = NULL;
			return second;

	}
}
int main (void) {
	Node* first = NULL;
	first = insertNode (first, 0, 5);
	printf ("%d\n", (*first).data);
	
	return 0;
}

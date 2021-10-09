#include <stdio.h>
#include <stdlib.h>

typedef struct Node_s {
	int x;
	struct Node_s *next;
} Node_t;

int main(void)
{
	Node_t root, *curr;
	
	root.x = 15;
	root.next = malloc(sizeof(Node_t));
	root.next->x = 2048;
	root.next->next = malloc(sizeof(Node_t));
	root.next->next->x = 4096;
	root.next->next->next = NULL;

	for (curr = &root; curr != NULL; curr = curr->next)
		printf("%d\n", curr->x);

	free(root.next->next);
	free(root.next);
	return (0);
}

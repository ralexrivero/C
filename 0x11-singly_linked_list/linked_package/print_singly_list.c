#include "list.h"

void print_singly_list(Node_t **root)
{
	Node_t *curr = *root;

	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
}

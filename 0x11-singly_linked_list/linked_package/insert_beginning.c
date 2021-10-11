#include "list.h"

void insert_beginning(Node_t **root, int value)
{
	Node_t *new_node = malloc(sizeof(Node_t));

	if (new_node == NULL)
	{
		exit(EXIT_FAILURE);
	}

	new_node->x = value;
	new_node->next = *root;

	*root = new_node;
}

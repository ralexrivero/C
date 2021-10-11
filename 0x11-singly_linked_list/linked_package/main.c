#include "list.h"

/**
 * main - entry point for singly linked list prototypes
 * Return: always 0
 */

int main(void)
{
	Node_t *root = NULL;

	insert_beginning(&root, 15);
	insert_beginning(&root, 16);
	insert_beginning(&root, 17);
	insert_beginning(&root, 18);
	print_singly_list(&root);

	return (0);
}

#include "bst.h"

/**
 * search_data - search value in binary tree
 * @root: pointer to the root node
 * @n: value to search
 *
 * Return: True if found, otherwise NULL
 */

struct node *search_data(struct node *root, int n)
{
	struct node *current;

	if (root->n == n)
	{
		printf("root value %d\n", root->n);
		return (root);
	}
	current = root;
	while (1)
	{
		if (current->n < n)
			current = current->right;
		else
			current = current->left;
	if (current == NULL)
	{
		printf("%d value not found\n", n);
		return (NULL);
	}
	if (current->n == n)
	{
		printf("actual %d\n", current->n);
		return (NULL);
	}
	}
}

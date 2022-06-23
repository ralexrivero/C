#include "bst.h"
/**
 * main - entry point for binary tree
 *
 * Return: always zero
 */
int main(void)
{
	struct node *root = malloc(sizeof(struct node));

	root->left = NULL;
	root->right = NULL;
	root->n = 1;

	insert_node(root, 2);
	insert_node(root, 0);
	printf("%d, %d, %d\n", root->n, root->right->n, root->left->n);

	search_data(root, 1);
	search_data(root, 2);
	search_data(root, 4);
	search_data(root, 0);
	search_data(root, 5);
	search_data(root, 1);
}

#include "bst.h"
/**
 * insert_node - insert node or create a binary tree
 *
 * @data: integer to add
 * @root: pointer to the root of the binary tree
 * Return: void
 */
void insert_node(struct node *root, int data)
{
	struct node *temp = (struct node *) malloc(sizeof(struct node));
	struct node *current;
	struct node *parent;

	temp->n = data, temp->left = NULL, temp->right = NULL;

	/* if tree is empty, create root node */
	if (root == NULL)
		root = temp;
	else
	{
		current = root;
		parent = NULL;
		while (1)
		{
			parent = current;
			if (data < parent->n) /* go to the left */
			{
				current = current->left;
				if (current == NULL) /* insert left */
				{
					parent->left = temp;
					return;
				}
			}
			else
			{
				current = current->right; /* go to the right */
				if (current == NULL)
				{
					parent->right = temp;
					return;
				}
			}
		}
	}
}

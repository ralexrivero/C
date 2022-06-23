#ifndef BST_H
#define BST_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct node - node for binary tree
 * @n: integer value
 * @left: left node
 * @right: right node
 */

struct node
{
	int n;
	struct node *left;
	struct node *right;
};

/* prototypes */
struct node *search_data(struct node *root, int n);
void insert_node(struct node *root, int data);

#endif /* BST_H */

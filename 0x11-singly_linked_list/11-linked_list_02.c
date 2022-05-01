#include <stdio.h>
#include <stdlib.h>

/**
 * struct Node - Singly linked list structure
 * @x: integar value
 * @next: pointer to next node
 */

typedef struct Node
{
	int x;
	struct Node *next;
} Node;

/**
 * insert_end - insert node at the end of linked list
 *
 * @root: double pointer to root of linked list
 * @value: value to insert in the new node
 * Return: void
 */

void insert_end(Node **root, int value)
{
	Node *current = *root;
	Node *new_node = malloc(sizeof(Node));
	if (new_node == NULL)
	{
		exit(1);
	}
	new_node->next = NULL;
	new_node->x = value;

	/* verify if linked list is empty */
	if (*root == NULL)
	{
		*root = new_node;
		return;
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;
}

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	Node *root = malloc(sizeof(Node));
	if (root == NULL)
	{
		exit(1);
	}
	root->next = NULL;
	root->x = 99;
	Node *current = root;
	int i = 0;

	/* create 10 nodes */
	for (i = 3; i <= 13; i++)
	{
		current->next = malloc(sizeof(Node));
		current->next->x = i;
		current = current->next;
	}
	current->next = NULL;

	/* insert end function */
	insert_end(&root, 20);
	insert_end(&root, 21);
	insert_end(&root, 22);

	/* print the nodes */
	current = root;
	while (current != NULL)
	{
		printf("%d\n", current->x);
		current = current->next;
	}

	/* free nodes */

	return (0);
}

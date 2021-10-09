/* #define _CRTDGB_MAP_ALLOC
#include <crtdbg.h> */
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int x;
	struct node *next;
} node;

/**
 * insert_end: adding nodes to an non elment list
 * 
 * @param root 
 * @param value 
 */

void insert_end(node **root, int value)
{
	/* create a new node */
	node *new_node = malloc(sizeof(node));
	/* verify if the allocation was successful */
	if (new_node == NULL)
	{
		exit(1);
	}
	new_node->x = value;
	/* verifiy if the list is empty */
	if (*root == NULL)
	{
		*root = new_node;
		return;
	}

	node* current = *root;
	while (current->next != NULL)
	{
		current = current->next;        
	}
	current->next = new_node;
}

void deaolocate_list(node **root)
{
	node* current = *root;
	while(current != NULL)
	{
		node* temp = current;
		current = current->next;
		free(temp);
	}
	*root = NULL;
}

int main()
{
	node* root = NULL;

	insert_end(&root, 1);
	insert_end(&root, 2);
	insert_end(&root, 3);

	for (node* current = root; current != NULL; current = current->next)
	printf("%d\n", current->x);

	deaolocate_list(&root);
/*         _CrtDumpMemoryLeaks(); */
	return (0);
}
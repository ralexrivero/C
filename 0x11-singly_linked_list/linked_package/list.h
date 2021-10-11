#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct Node - singly linked list structure
 * @x: integer value
 * @next: pointer to next node
 */
typedef struct Node
{
	int x;
	struct Node *next;
} Node_t;

/* prototypes */

void insert_beginning(Node_t **root, int value);
void insert_end(Node_t **root, int value);
void insert_after(Node_t **root, int value, unsigned long int position);
void delete_node(Node_t **root, unsigned long int position);
void print_singly_list(Node_t **root);
void print_reverse_list(void);
void free_singly_list(Node_t **root);

/* control loop */


#endif /* LIST_H */

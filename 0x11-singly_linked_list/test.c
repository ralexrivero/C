#include "lists.h"
/**
 * add_node_end - adds a new node
 * @head: pointer to head of linked list
 * @str: string to be duplicated to new node
 * Return: addresss to new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int j = 0;

	if (!(head || str))
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	for (; str[j]; j++)
		;

	new_node->str = strdup(str);
	new_node->len = j;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
    while (temp->next)
        temp = temp->next;
    temp->next = new_node;
    return (new_node);
}
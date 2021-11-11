#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: node poitning to head
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("0, (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
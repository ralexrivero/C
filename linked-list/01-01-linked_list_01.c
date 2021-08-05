#include "lists.h"

/**
 * main - struct, linked list and malloc
 * Description: create linear linked list
 * store three characters in struct
 */

int main(void)
{
    LINK head;
    /* return a pointer to enough storage for an object of size type */
    /* return a pointer to void */
    head = malloc(sizeof(ELEMENT));

    /* dynamically create a linked list storing three values */
    head -> d = 'n';
    head -> next = NULL;

    /* add the second value */
    head -> next = malloc(sizeof(ELEMENT));
    head -> next -> d = 'e';
    head -> next -> next = NULL;

    /* add third element */
    head -> next -> next = malloc(sizeof(ELEMENT));
    head -> next -> next -> d = 'w';
    head -> next -> next -> next = NULL;
    /* three element list pointed by head, end has the value NULL */
}
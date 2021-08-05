#include "lists.h"

/**
 * s_to_l - string to list
 */

LINK s_to_l(char s[])
{
    LINK head = NULL, tail;
    int var_int_i;

    if (s[0] != '\0')
        /* start with first element */
        /* or end when finish the string */
        head = malloc(sizeof(ELEMENT));
        head -> d = s[0];
        tail = head;
        printf("address: %p, value: %c\n", head, head -> d);
        for(var_int_i = 1; s[var_int_i] != '\0'; ++var_int_i)
        {
            /* iterate and add to tail */
            tail -> next = malloc(sizeof(ELEMENT));
            tail = tail -> next;
            tail -> d = s[var_int_i];
            printf("address: %p, value: %c\n", tail, tail -> d);
        }
        return (head);
}
/**
 * main - test prototype
 */

int main(void)
{
    char string[] = "Good!";

    char *head_recived = s_to_l(string);
    printf("head: %p\n", head_recived);
    return (0);
}
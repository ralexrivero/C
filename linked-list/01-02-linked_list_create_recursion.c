#include "lists.h"

/**
 * string_to_list - create a linear linked list
 * Description: using recursion
 * @s: string to produce the list
 */

LINK string_to_list(char s[])
{
    LINK head;
/**
 * when pass an string as argument create a list with the characters
 */
    if(s[0] == '\0')
    return (NULL);
/* when the end of the string is detected return NULL */
/* terminates the recursion */
    else
    {
        head = malloc(sizeof(ELEMENT));
/* if s[] is not the null string, malloc() retrieves enough bytes */
/* to store an object type ELEMENT */
        head -> d = s[0];
/* the memeber d of ELEMENT is assigned the first character of string */
        head -> next = string_to_list(s + 1);
/* pointer expresion: s + 1 points the remainder of string */
/* call recursively */
        printf("pointer: %p value: %c\n", head, head -> d);
        return (head);
/* function exits and return the address of the head of the list */
    }
}

/**
 * main - for testing prototype
 */

int main(void)
{
    char s[] = "hola";

    char *head = string_to_list(s);
    printf("head: %p\n", head);
    return (0);
}
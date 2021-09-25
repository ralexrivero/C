#include <stdio.h>
#include <stdlib.h>

/**
 * main - define structure
 */

struct list
{
    int data;
    struct list *next;
};

int main(void)
{
    struct list a, b, c;
    int x, y;

    a.data = 1;
    b.data = 2;
    c.data = 3;
    a.next = b.next = c.next = NULL;

    a.next = &b;
    b.next = &c;
    x = a.next -> next -> data;
    y = a.next -> next -> next;

    printf("a: %d\n", a.data);
    printf("a next: %d\n", a.next -> data);
    printf("a next next: %d\n", x);
    printf("a next * 3, address: %p\n", y);

}
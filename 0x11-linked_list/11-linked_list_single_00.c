#include <stdio.h>
#include <stdlib.h>

/**
 * Node - int struct for single linked list
 */
typedef struct Node {
        int x;
        struct Node* next;
} Node;

/**
 * struct listint_s - singly linked list
 * Return: pointer to head
 */

int main(int argc, char **argv)
{
        Node root, elem2;
        
        root.x = 15;
        root.next = &elem2;
        elem2.x = -2;
        elem2.next = NULL;

        printf("First: %d\n", root.x);
        printf("Second: %d\n", elem2.x);
        /* access the second element by dereference */
        printf("Second: %d\n", root.next->x);

        return (0);
}

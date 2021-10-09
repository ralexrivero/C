#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
        int x;
        struct Node* next;
} Node;

int main()
{
       Node root;

       root.x = 1;
       root.next = malloc(sizeof(Node));
       if (root.next == NULL) { exit(1); }
       root.next->x = 2;
       root.next->next = malloc(sizeof(Node));
       if (root.next->next == NULL) { exit(1); }
       root.next->next->x = 3;
       root.next->next->next = NULL;

       Node* current = &root;

       printf("while:\n");
       while (current != NULL)
       {
               printf("%d\n", current->x);
               current = current->next;
       }
       printf("for:\n");
       for (Node* current = &root; current != NULL; current = current->next)
       printf("%d\n", current->x);
       /* it is important the order of freeing the memory */
       free(root.next->next);
       free(root.next);
       return(0);
}
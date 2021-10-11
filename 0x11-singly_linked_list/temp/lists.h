#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef char DATA;

struct linked_list{
    DATA d;
    struct linked_list *next;
};

typedef struct linked_list ELEMENT;
typedef ELEMENT *LINK;

#endif
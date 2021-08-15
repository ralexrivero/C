#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
        fork();
        fork();
        fork();
        /* print 2n fork. print 8 times */
        printf("Hello, world!\n");
        return (0);
}
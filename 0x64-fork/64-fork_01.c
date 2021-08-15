#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
        int id = fork();
        
        if (id == 0)
        {
                printf("Hello, World! from child id: %d %d\n", getpid(), id);
        }
        else
        {
                printf("Hello, World! from parent id: %d %d\n", getpid(), id);
        }
        return (0);
}

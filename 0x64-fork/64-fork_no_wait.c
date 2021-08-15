#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
        int id = fork();
        int i, n;

        if (id == 0)
        {
                n = 0;
        }
        else 
        {
                n = 5;
        }
        
        for (i = n; i < n + 5; i++)
        {
                printf("%d", i);
                fflush(stdout);
        }
        write(1, "\n", 1);
        return(0);
}
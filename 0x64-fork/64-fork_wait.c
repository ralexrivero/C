#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include<sys/types.h>
#include<sys/wait.h>

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
        
        if (id != 0)
        {
                wait(NULL);
        }

        for (i = n; i < n + 5; i++)
        {
                printf("%d", i);
                fflush(stdout);
        }

        if (id != 0)
        {
                write(1, "\n", 1);
        }
        
        return(0);
}
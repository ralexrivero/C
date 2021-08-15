#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
        int id = fork();
        /* id will be 0 if the child process is created */\
        /*only fork the main process */
        if (id != 0)
        {
                fork();
        }
        printf("Hello World\n");
        return (0);
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
        int id = fork();
        int res;

        if (id == 0)
        {
                sleep(1);
        }
        res = wait(NULL);
        if (res == -1)
        {
                printf("No children to wait for\n");
        }
        else
        {
                printf("%d finish execution\n", res);
        }
        printf("Current id is: %d, pid is: %d, and the parent id is: %d\n", id, getpid(), getppid());
        return (0);
}
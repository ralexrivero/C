#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
        int id = fork();

        printf("Current id is: %d, pid is: %d, and the parent id is: %d\n", id, getpid(), getppid());
        return (0);
}
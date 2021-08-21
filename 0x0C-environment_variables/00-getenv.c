#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
        printf("PATH: %s\n", getenv("PATH"));
        printf("HOME: %s\n", getenv("HOME"));
        printf("USER: %s\n", getenv("USER"));
        printf("ROOT: %s\n", getenv("ROOT"));

        return (0);
}
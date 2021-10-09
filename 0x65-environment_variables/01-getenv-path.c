#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        char *fullpath =getenv("PATH");

        printf("PATH: %s",fullpath);
        
        return (0);
}
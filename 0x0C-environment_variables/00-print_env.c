#include <stdio.h>

int main(int argc, char const *argv[], char const *envp[])
{
        int i = 0;
        for (; envp[i] != NULL; i++)
        
        printf("%s\n", envp[i]);
}
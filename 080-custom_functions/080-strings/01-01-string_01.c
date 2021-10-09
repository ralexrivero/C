#include <stdio.h>
#include <string.h>

void compararcadenas (char a[], char b[])
{
    int i = strcmp(a,b);
    if (!i)
    printf("iguales\n");
    else
    if (i < 0)
    printf("%s < %s\n", a, b);
    else
    printf("%s > %s\n", a, b);
}

int main(void)
{
    char a[] = "hola";
    char b[] = "cuatro";

    compararcadenas(a, b);
    return (0);
}
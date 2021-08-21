#include <stdio.h>

/**
 * _strcmp - compares string 1 with string 2
 * Description: compares two strings
 * Return: 0 if equal or not 0 if are different
 * @s1: first string
 * @s2: second string
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0')
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}
return (0);
}

int main(void)
{
        char *s1 = "PATH";
        char *s2[] = {"PATHFINDER"};
        printf("s2: %s\n", s2[0]);
        int comp = _strcmp(s1,s2[0]);
        printf("result: %d\n", comp);
}
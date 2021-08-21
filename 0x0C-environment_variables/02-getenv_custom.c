#include <stdio.h>
#include <stdlib.h>

int _strlen(char *string)
{
        int length = 0;

        while (*(string + length))
        {
                length++;
        }
        return (length);
}

/**
 * @brief get the value of a environmental variable
 * 
 * @param name name of the env. variable
 * @param envp pointer to env. variables
 * @return char* full path of env. variable
 */

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

char *_getenv(const char *name, char **envp)
{
        int i = 0, j = 0, name_len = 0, compare = 0;

        name_len = _strlen((char*)name);
        printf("%d\n", name_len);

        /* run trough the env variables */
        for (;envp[i] != NULL; i++)
        {
                for (; envp[i][j] != '='; j++)
                {
                        /* find ascii 61 and star strcmp */
                        compare =_strcmp(name, envp[i]);
                        if (compare == 0)
                        /* found the environment */
                        printf("compare: %d found\n", compare);
                        printf("env: %s", envp[i] + name_len + 1);
                        /* if not find, continue */
                }

        }
}

/**
 * @brief entry point
 * 
 * @param argc 
 * @param argv 
 * @param envp 
 * @return int 
 */

int main(int argc, char *argv[], char *envp[])
{
        (void) argc;
        (void) argv;

        char *fullpath = _getenv("PATH", envp);

        printf("PATH: %s\n", fullpath);
        return (0);
}
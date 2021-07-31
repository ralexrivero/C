#include <stdio.h>

int main(void)
{
    char* s = "asd";
char** p = &s;

printf("The value of s is: %p\n", s);
printf("The address of s is: %p\n", &s);

printf("The value of p is: %p\n", p);
printf("The address of p is: %p\n", &p);

printf("The address of s[0] is: %p\n", &s[0]);
printf("The address of s[1] is: %p\n", &s[1]);
printf("The address of s[2] is: %p\n", &s[2]);

return (0);
}
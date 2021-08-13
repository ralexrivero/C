#include <stdio.h>
/**
 * sum: sum 2 numbers
 * 
 * Returns: the result
 */

int sum(void)
{
        int a, b, c;

        a = 80;
        b = 2;
        c = a / b;

        printf("%d / %d = %d\n", a, b, c);

        return (c);
}
/**
 * main: call sum function
 * the scope of variables in sum() are local to sum()
 * when print the variables in main(), they are not asigned value
 * @return int 
 */
int main(void)
{
        int a, b, c;
        /* the variables are not assigned value and will only print garbage */
        
        puts("call the sum() function:");
        printf("return value of sum(): %d\n", sum());
        printf("the values in main: a: %d, b: %d, c: %d\n", a, b, c);
        return (0);
}
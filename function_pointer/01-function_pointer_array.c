#include <stdio.h>

void add(int a, int b)
{
    printf("Addition is %d\n",a + b);
}

void substract(int a, int b)
{
    printf("Susbtract is %d\n", a - b);
}

void multiply(int a, int b)
{
    printf("Multipy is %d\n", a * b);
}

int main()
{
    /* fun_ptr is an array of function pointers */
    void (*fun_ptr_arr[])(int, int) = {add, substract, multiply};
    unsigned int ch, a = 15, b = 10;
    printf("Enter choice: 0 for add, 1 for substract and 2"
    "for multiply\n");
    scanf("%d", &ch);
    if (ch > 2)
    return(0);
    (*fun_ptr_arr[ch])(a, b);
    return (0);
}
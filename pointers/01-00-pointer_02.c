#include <stdio.h>

int main(void)
{
    int var_int_i;
    int *ptr_int_i;
    int *ptr_int_i2;

    var_int_i = 120;
    ptr_int_i2 = &var_int_i; 

    printf("variable i: %d\n", var_int_i);
    printf("direccion de i: %p\n", &var_int_i);
    printf("puntero i sin asignar: %p\n", ptr_int_i);
    
    ptr_int_i = &var_int_i;

    printf("direccion de i: %p\n", ptr_int_i);

    printf("valor ptr int %d\n", *ptr_int_i);


    return (0);
}
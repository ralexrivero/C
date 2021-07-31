#include <stdio.h>

int main(void)
{
 /* declaracion de variables puntero */
 int *pa;
 char *pc;
 float *pf;

pa = 24;

 printf("valor de pa: %d\n", pa);
 printf("direccion de pa: %d\n", &pa);
 printf("direccion de pa: %x\n", &pa);
 printf("valor de puntero pa: %lli\n", *pa);

}
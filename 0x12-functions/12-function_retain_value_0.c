#include <stdio.h>

void funct(void)
{
	int a = 16;

	printf("In funct(), a = %d\n", a);
}

int main(void)
{
	int a = 10;

	printf("In main, a = %d\n", a);
	funct();
	printf("in main, a = %d\n", a);
}
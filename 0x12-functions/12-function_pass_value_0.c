#include <stdio.h>

void div(void)
{
	int a = 0, b = 0;

	a = 100;
	b = 3;

	printf("%d / %d = %d\n", a, b, a / b);
}

int main (void)
{
	div();
	printf("done\n");

	return (0);
}
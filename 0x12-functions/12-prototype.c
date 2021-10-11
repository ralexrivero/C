#include <stdio.h>

void sum(void)
{
	int a = 0, b = 0;

	a = 100;
	b = 3;

	printf("%d / %d = %d\n", a, b, a / b);
}

int main (void)
{
	sum();
	printf("done\n");

	return (0);
}
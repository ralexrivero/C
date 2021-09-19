#include <stdio.h>

int main(void)
{
	int a, b;

	a = 10;
	b = 20;

	printf("%d + %d = %d\12", a, b, a + b);

	printf("%d + %d = %d\12", +a, -b, +a + -b);

	printf("a: %d, b: %d\12", a, b);

	return (0);
}
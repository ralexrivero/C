#include <stdio.h>

int main(void)
{
	int a = 55;

	printf("a: %d\12", a);
	a = a + 5;
	printf("a: %d\12",a);
	a = a - 5;
	printf("a: %d\12", a);
	a = a * 5;
	printf("a: %d\12", a);
	a = a / 5;
	printf("a: %d\12", a);

	/* whith assignment operator is a shortcut to the same result */
	/* self modifying a varible */
	putchar("\12");

	printf("a: %d\12", a);
	a += 5;
	printf("a: %d\12",a);
	a -= 5;
	printf("a: %d\12", a);
	a *= 5;
	printf("a: %d\12", a);
	a /= 5;
	printf("a: %d\12", a);

	return (0);
}
#include <stdio.h>

int main(void)
{
	int a, b;
	
	/* the order of precedence is */
	/* left to right */
	/* parentheses first */
	/* multiplication and division */
	/* addition and subtraction */
	a = 6 / 2 * (1 + 2);
	b = 6 / 2 * 1 + 2;

	printf("a: %d, b: %d\12", a, b);

	return (0);
}
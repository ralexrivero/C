#include <stdio.h>

int main(void)
{
	int a, c;
	float b;

	a = 15;
	/* if divide a by 2 the output will be 7, because of that is 2.0 */
	b = a / 2.0;
	c = b * 4;

	printf("a: %d, b: %1.1f, c: %d\12", a, b, c);

	return (0);
}
/* comparision ? true: false */
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0;

	printf("Enter first value: ");
	scanf("%d", &a);
	printf("Enter second value: ");
	scanf("%d", &b);
	c = a > b ? a : b;
	printf("%d is the greater of %d and %d\n", c, a, b);

	return (0);
}
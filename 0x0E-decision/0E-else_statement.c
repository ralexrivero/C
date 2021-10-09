#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	printf("Enter first value:\n");
	scanf("%d", &a);
	printf("Enter second value:\n");
	scanf("%d", &b);

	if (a < b)
		printf("%d is less than %d\n", a, b);
	else if (a > b)
		printf("%d is greater than %d\n", a, b);
	else
		printf("%d is equal to %d\n", a, b);
	
	return (0);
}

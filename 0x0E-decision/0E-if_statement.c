#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;

	printf("Type a value:\n");
	scanf("%d", &a);
	if (a )
	if (a < 10)
		printf("You typed a value less than 10\n");
	else
		printf("You typed a value equal o greater than 10\n");
	printf("You typed: %d\n", a);
	printf("Thank you!\n");
	return (EXIT_SUCCESS);
}
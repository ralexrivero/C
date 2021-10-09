#include <stdio.h>

int main(void)
{
	int a;

	printf("Select a choice: 1, 2 or 3\n");

	scanf("%d", &a);

	if (a == 1)
		printf("You selected the choice: 1\n");
	else if (a == 2)
		printf("You selected the choice: 2\n");
	else if (a == 3)
		printf("You selected the choice: 3\n");
	else
		printf("Choice out of range!\n");

	return (0);
}
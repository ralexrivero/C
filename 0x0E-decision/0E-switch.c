/* execute the match of variable in case */

#include <stdio.h>

int main(void)
{
	int a = 0;

	printf("Select a choice: 1, 2 or 3\n");
	scanf("%d", &a);

	switch (a)
	{
		case 1:
			printf("You select: 1\n");
			break;
		case 2:
			printf("You select case 2\n");
			break;
		case 3:
			printf("You select 3\n");
			break;
		default:
			printf("Invalid choice\n");
	}
	return (0);
}
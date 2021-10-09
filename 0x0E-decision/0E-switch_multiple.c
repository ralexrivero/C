#include <stdio.h>

int main(void)
{
	char c = 0;

	printf("Select your choice:\n");
	printf("A - Pizza\nB - Chesseburger\nC - Sushi\n");
	scanf("%c", &c);

	switch (c)
	{
		case 'A':
		case 'a':
			printf("Great! a pizza!\n");
			break;
		case 'B':
		case 'b':
			printf("Yeah! Cheeseburger with fries!\n");
			break;
		case 'C':
		case 'c':
			printf("I love suhi!\n");
			break;
		default:
			printf("I am hungry! Select something!\n");
	}
	return (0);
}
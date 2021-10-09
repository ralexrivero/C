#include <stdio.h>

int main(void)
{
	char c = 0;

	printf("Evaluate a character program\n");
	printf("Enter a character:\n");
	scanf("%c", &c);

	if (c == 32)
		printf("You typed a space\n");
	else if (c >= 48 && c <= 57)
		printf("You typed a number\n");
	else if (c >= 65 && c <=90)
		printf("You typed an uppercase character\n");
	else if (c >= 97 && c <= 122)
		printf("You typed a lowercase character\n");
	else
		printf("You typed a symbol\n");
	printf("You typed the character: %c\n", c);
	return (0);
}
#include <stdio.h>

int main(void)
{
	int a;

	for (a = 0; a < 20; a++)
	{
		/* the not unary operator reverts the condition */
		if ( !(a < 10))
			putchar('*');
		else
			putchar(' ');
		printf("%d\12", a);
	}
	return (0);
}
#include <stdio.h>

int main(void)
{
	/* logical operators works on expressions that  evaluate TRUE or FALSE */
	/* && logical AND */
	/* || logical OR (two pipes or vertical bars */
	/* the value 0 is false */
	/* Non zero values are true */

	 int a = 0;

	 while (a <= 20)
	 	{
			 if (a > 6 && a < 15)
			 	putchar('*');
			else
				putchar(' ');
			printf("%3d\12", a);
			a++;
		 }
	a = 0;

	putchar('\12');
	
	while (a <= 20)
		{
			if (a < 6 || a > 15)
				putchar('*');
			else
				putchar(' ');
				printf("%3d\12",a);
			a++;
		}

	a = 0;

	putchar('\12');

	while (a <= 20)
	{
		if (a <= 5 || a >= 16 || a == 10)
			putchar('*');
		else
			putchar(' ');
		printf("%3d\12", a);
		a++;
	}
	return (0);
}
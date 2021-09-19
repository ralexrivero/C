#include "functions.h"

int main(void)
{
	/* << to left shift */
	/* >> to right shift */
	
	unsigned short a;
	int x;

	a = 0x0003;

	for (x = 0; x < 16; x++)
		{
			printf("%04X - %s\12", a, binString(a));
			a = a << 1;
		}
	putchar('\12');
	a = 0x0003;
	for (x = 0; x < 16; x++)
		{
			printf("%04X - %s\12", a, binString(a));
			a = a << 2;
		}
	return (0);
}
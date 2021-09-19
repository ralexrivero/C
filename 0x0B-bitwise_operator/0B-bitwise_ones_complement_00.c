#include "functions.h"

int main(void)
{
	unsigned short int a, b;

	a  = 0xAAAA;

	printf("Start: %04X - %s\12", a, binString(a));
	/* revert value of every bit */
	b = ~ a;
	printf("  End: %04X - %s\12", b, binString(b));

	return (0);
}
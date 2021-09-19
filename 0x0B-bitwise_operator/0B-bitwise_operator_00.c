#include "functions.h"

int main(void)
{
	/* bitwise works with bits */
	/* & bitwise AND operator */
	/* | bitwise inclusive OR operator */
	/* ^ bitwise exclusive OR operator */
	/* ~ one's complement */
	unsigned short a, b, c;

	a = 0xAAAA;
	b = 0x00FF;

	printf("Start: %04X = %s\12", a, binString(a));
	printf("     & %04X = %s\12", b, binString(b));
	c = a & b;
	printf("  End: %04X = %s\12", c, binString(c));

	return (0);
}
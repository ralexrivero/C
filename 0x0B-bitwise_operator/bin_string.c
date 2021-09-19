#include "functions.h"

char *binString(unsigned short n)
{
	static char bin[17];
	int x;

	for (x = 0; x < 16; x++)
	{
		bin[x] = n & 0x8000 ? '1' : '0';
		n <<= 1;
	}
	bin[16] = '\0';

	return (bin);
}

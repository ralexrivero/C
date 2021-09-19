#include <stdio.h>

int main(void)
{
	char a;
	int b;
	float c;
	double d;
	char string[] = "Hello!";
	int buffer[10];

	/*size in memmory of each variable */
	printf("char variable 'a' uses %lu bytes\12", sizeof(a));
	printf("integer variable 'b' uses %lu bytes\12", sizeof(b));
	printf("float variable 'c' uses %lu bytes\12", sizeof(c));
	printf("double variable 'd' uses %lu bytes\12", sizeof(d));
	printf("string array 'string' uses %lu bytes\12", sizeof(string));
	printf("integer array 'buffer' uses %lu bytes\12", sizeof(buffer));

	return (0);
}
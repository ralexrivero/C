#include <stdio.h>

float average(float a, float b, float c);

int main(void)
{
	float x;

	x = average(33, 29, 41);
	printf("The average is: %.2f\n", x);

	return (0);
}

float average(float a, float b, float c)
{
	float avg = 0;

	avg = (a + b + c) / 3;

	return (avg);
}

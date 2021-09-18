#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x, r[5];
	/* with cast prevent produce error */
	srand((unsigned)time(NULL));
	
	for (x = 0; x < 5; x++)
	r[x] = rand()%10+1;
	printf("Here are %d random values\n", x);
	for (x = 0; x < 5; x++)
	printf("Value %d : %3d\n", x, r[x]);

	return (0);        
}
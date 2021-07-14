#include <stdio.h>
/**
 * main - print an integer
 * Description: print an integer by prototype
 * @n: integer to diplay
 * Return: zero
 */
void main(int n)
{
int digits, n_d, i, power, n_obo;

n = 498;

if (n < 0) /* If n is smaller than 0, put a - sign and change number to positive */
{
	putchar('-');
	n = -n;
}
digits = 0; /* count digits of n */
n_d = n;
while (n_d > 0)
{
n_d = n_d / 10;
digits++;
}
if (digits == 0)
{
	digits = 1;
}
while(digits > 0){ /* power of ten according to number of digits*/
power = 1;
for(i = 1; i <= (digits -1); i++)
{
power = (power * 10);
}
--digits;
n_obo = (n / power) % 10;
putchar(n_obo + '0');
}
}
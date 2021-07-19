#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>

/**
 * main - the actual size of various integer types
 * Description: the minimum and maximum value
 */

int main(void)
{
    printf("signed char minimum value: %d\n",SCHAR_MIN);
    printf("signed char maximum value: %d\n",SCHAR_MAX);
    printf("char minimum value: %d\n",CHAR_MIN);
    printf("char maximum value: %d\n",CHAR_MAX);
    printf("unsigned char maximum value: %d\n",UCHAR_MAX);
    printf("short int minimum value: %d\n",SHRT_MIN);
    printf("short int maximum value: %d\n",SHRT_MAX);
    printf("unsigned short int max value: %d\n",USHRT_MAX);
    printf("int minimum value: %d\n",INT_MIN);
    printf("int maximum value: %d\n",INT_MAX);
    printf("unsigned int maximum value: %u\n",UINT_MAX);
    printf("long int minimum value: %ld\n",LONG_MIN);
    printf("long int maximum value: %ld\n",LONG_MAX);
    printf("unsigned long int maximum value: %lu\n",ULONG_MAX);
    printf("long long int minimum value: %lld\n",LLONG_MIN);
    printf("long long int maximum value: %lld\n",LLONG_MAX);
    printf("unsigned long long int maximum value: %llu\n",ULLONG_MAX);
    printf("float minimum value: %e\n",FLT_MIN);
    printf("float maximum value: %e\n",FLT_MAX);
    printf("double minimum value: %e\n",DBL_MIN);
    printf("double maximum value: %e\n",DBL_MAX);
    printf("long double minimum value: %le\n",LDBL_MIN);
    printf("long double maximum value: %le\n",LDBL_MAX);
}
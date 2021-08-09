#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>

main()
{
/* From stdlib.h header file */
printf("RAND_MAX = %i\n\n", RAND_MAX);	/* maximum integer for use in rand function */
/* From limits.h header file */
printf("CHAR_BIT = %i\n", CHAR_BIT);	/* bits in a character */
printf("CHAR_MAX = %i\n", CHAR_MAX);	/* maximum value of a character */
printf("CHAR_MIN = %i\n", CHAR_MIN);	/* minimum value of a character */
printf("INT_MAX = %i\n", INT_MAX);	/* maximum value of an integer */
printf("INT_MIN = %i\n", INT_MIN);	/* minimum value of an integer */
printf("LONG_MAX = %li\n", LONG_MAX);	/* maximum value of a long integer */
printf("LONG_MIN = %li\n", LONG_MIN);	/* minimum value of a long integer */
printf("SCHAR_MAX = %i\n", SCHAR_MAX);	/* maximum value of a signed character */
printf("SCHAR_MIN = %i\n", SCHAR_MIN);	/* minimum value of a signed character */
printf("SHRT_MAX = %i\n", SHRT_MAX);	/* maximum value of a short integer */
printf("SHRT_MIN = %i\n", SHRT_MIN);	/* minimum value of a short integer */
printf("UCHAR_MAX = %u\n", UCHAR_MAX);	/* maximum value of an unsigned character */
printf("UINT_MAX = %u\n", UINT_MAX);	/* maximum value of an unsigned integer */
printf("ULONG_MAX = %u\n", ULONG_MAX);	/* maximum value of an unsigned long integer */
printf("USHRT_MAX = %u\n\n", USHRT_MAX);	/* maximum value of an unsigned short integer */
/* From float.h header file */
printf("FLT_RADIX = %i\n", FLT_RADIX);	/* radix of exponent representation */
printf("FLT_ROUNDS = %i\n", FLT_ROUNDS);/* floating-point rounding mode for addition */
printf("FLT_DIG = %i\n", FLT_DIG);	/* decimal digits of precision */
printf("FLT_EPSILON = %g\n", FLT_EPSILON);/* smallest number, x, such that 1.0 + x != 1.0 */
printf("FLT_MANT_DIG = %i\n", FLT_MANT_DIG);/* number of base FLT_RADIX digits in mantissa */
printf("FLT_MAX = %g\n", FLT_MAX);	/* maximum floating-point number */
printf("FLT_MAX_EXP = %i\n", FLT_MAX_EXP);/* maximum, n, such that FLT_RADIX^n-1 is representable */
printf("FLT_MIN = %g\n", FLT_MIN);	/* minimum normalized floating-point number */
printf("FLT_MIN_EXP = %i\n", FLT_MIN_EXP);/* minimum, n, such that 10^n is a normalized number */
printf("DBL_DIG = %i\n", DBL_DIG);	/* decimal digits of precision */
printf("DBL_EPSILON = %g\n", DBL_EPSILON);/* smallest number, x, such that 1.0 + x != 1.0 */ 
printf("DBL_MANT_DIG = %i\n", DBL_MANT_DIG);/* number of base FLT_RADIX digits in mantissa */ 
printf("DBL_MAX = %g\n", DBL_MAX);	/* maximum double floating-point number */
printf("DBL_MAX_EXP = %i\n", DBL_MAX_EXP);/* maximum, n, such that FLT_RADIX^n-1 is representable */
printf("DBL_MIN = %g\n", DBL_MIN);	/* minimum normalized double floating-point number */
printf("DBL_MIN_EXP = %i\n\n", DBL_MIN_EXP);/* minimum, n, such that 10^n is a normalized number */

float largest_float = 1.0;
float smallest_float = 0.1;
float prev_float[2],u,x;
int largest_int = 1;
int prev_int = 0;

prev_float[0] = prev_float[1] = 0;
for(;;){
	prev_float[0] = prev_float[1];
	prev_float[1] = largest_float;
	largest_float = largest_float*1.00001;
	if(largest_float == prev_float[1])
		break;
	}
printf("The largest representable floating-point number is %g\n\n",prev_float[0]);
printf("This is what happens when you exceed the max floating-point size, %g\n\n",1e1*largest_float);

prev_float[0] = prev_float[1] = 0;
for(;;){
	prev_float[0] = prev_float[1];
	prev_float[1] = smallest_float;
	smallest_float = smallest_float*0.9999999;
	if(smallest_float == prev_float[1])
		break;
	}
printf("The smallest representable floating-point number is %g\n\n",smallest_float);
printf("This is what happens when you exceed the min floating-point size, %g\n\n",smallest_float*smallest_float);

while(largest_int > prev_int){
	prev_int = largest_int;
	largest_int++;
	}
printf("The largest representable integer is %i\n\n",largest_int-1);
printf("This is what happens when you exceed the max integer size, %i\n\n",2*largest_int);

u = 1e-30;
for(;;){
	if(1.0 != 1.0 + u)
		break;
	u = u * 1.000001;	
	}
printf("The largest u (float) can be and still satisfy (1.0 + u = 1.0) is %g\n\n",u);

double ud = 1e-30;
for(;;){
	if(1.0 != 1.0 + ud)
		break;
	ud = ud * 1.000001;	
	}
printf("The largest u (double) can be and still satisfy (1.0 + u = 1.0) is %g\n\n",ud);

x = 1e30;
for(;;){
	if(x != 1.0 + x)
		break;
	x = x * 0.999;	
	}
printf("The smallest x (float) can be and still satisfy (1.0 + x = x) is %g\n\n",x);

double xd = 1e30;
for(;;){
	if(xd != 1.0 + xd)
		break;
	xd = xd * 0.999999;	
	}
printf("The smallest x (double) can be and still satisfy (1.0 + x = x) is %g\n\n",xd);
}
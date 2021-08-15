#include <stdio.h>
#include <float.h>
#include <limits.h>

void main(void)
  {
//--- devolvemos los valores de las constantes
   printf("CHAR_MIN = %d\n",CHAR_MIN);
   printf("CHAR_MAX = %d\n",CHAR_MAX);
   printf("UCHAR_MAX = %d\n",UCHAR_MAX);
  /* printf("SHORT_MIN = %d",SHORT_MIN);
   printf("SHORT_MAX = %d",SHORT_MAX);
   printf("USHORT_MAX = %d",USHORT_MAX); */
   printf("INT_MIN = %d\n",INT_MIN);
   printf("INT_MAX = %d\n",INT_MAX);
   printf("UINT_MAX = %u\n",UINT_MAX);
   printf("LONG_MIN = %d\n",LONG_MIN);
   printf("LONG_MAX = %d\n",LONG_MAX);
   printf("ULONG_MAX = %u\n",ULONG_MAX);
 /*  printf("EMPTY_VALUE = %.16e",EMPTY_VALUE); */
   printf("DBL_MIN = %.16e\n",DBL_MIN);
   printf("DBL_MAX = %.16e\n",DBL_MAX);
   printf("DBL_EPSILON = %.16e\n",DBL_EPSILON);
   printf("DBL_DIG = %d\n",DBL_DIG);
   printf("DBL_MANT_DIG = %d\n",DBL_MANT_DIG);
   printf("DBL_MAX_10_EXP =  %d\n",DBL_MAX_10_EXP);
   printf("DBL_MAX_EXP = %d\n",DBL_MAX_EXP);
   printf("DBL_MIN_10_EXP = %d\n",DBL_MIN_10_EXP);
   printf("DBL_MIN_EXP = %d\n",DBL_MIN_EXP);
   printf("FLT_MIN = %.8e\n",FLT_MIN);
   printf("FLT_MAX = %.8e\n",FLT_MAX);
   printf("FLT_EPSILON = %.8e\n",FLT_EPSILON);
  }
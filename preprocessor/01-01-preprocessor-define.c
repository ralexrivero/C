#include <stdio.h>

#define PI 3.14
/*try to change value of PI*/
#define SQR(X) X*X
#define DEMO(X) (X + X)
int main(void)
{
    int n;

/*    double areaofcircle = 3.14 * 10 * 10; */
    double areaofcircle = PI * 10 * 10;
    printf("Area = %lf\n", areaofcircle);
    n = DEMO(2) * DEMO(3);
    printf("Demo = %d\n", n);
}
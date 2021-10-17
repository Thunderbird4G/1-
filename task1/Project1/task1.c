
#include <stdio.h>

#include <math.h>


void main(void)
{
    double x = 10.5;
    printf("x = %.4lf\n", x);
    double f;
    f = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));

    printf("f = %.4lf\n", f);

    printf("x = ");
    scanf_s("%lf", &x);


    f = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
    printf("f = %.4lf\n", f);
}
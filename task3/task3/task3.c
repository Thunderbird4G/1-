#include <stdio.h>
#include <math.h>


double F(double x);

void main(void)
{

    printf("vvedite x \n");
    double y, x;
    scanf_s("%lf", &x);
    printf("x = %.4lf\n", x);
    y = F(x);
    printf("y=F(X)= %.4lf\n", y);
}

double F(double x)
{
    return    (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}
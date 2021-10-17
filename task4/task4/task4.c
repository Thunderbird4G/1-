#include <stdio.h>
#define PI 3.14
#include <math.h>



double x, result;
void F(void);

void main(void)
{

    printf("vvedite x \n");
    scanf_s("%lf", &x);
    printf("x = %.4lf\n", x);
    F();
    printf("result = %.4lf\n", result);
}

void F(void)
{
    result=(sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}
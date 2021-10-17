#include <stdio.h>

double F(double x);

void main(void)
{

    printf("vvedite x\n");
    double y, x;
    scanf_s("%lf", &x);
    printf("x = %.4lf\n", x);
    y = F(x);
    printf("y = %.4lf\n", y);
}
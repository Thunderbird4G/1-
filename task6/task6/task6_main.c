#include <stdio.h>

extern double x, result;
void F(void);

void main(void)
{
    printf("vvedite x \n");
    scanf_s("%lf", &x);
    printf("x = %.4lf\n", x);
    F();
    printf("result = %.4lf\n", result);
}
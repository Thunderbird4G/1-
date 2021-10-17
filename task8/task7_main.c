#include <stdio.h>
#include "func.h"



void main()
{

    printf("vvedite x \n");
    scanf_s("%lf", &x);
    printf("x = %.4lf\n", x);
    F();
    printf("result = %.4lf\n", result);
}
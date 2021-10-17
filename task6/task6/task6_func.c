#include <stdio.h>
#include <math.h>


double x, result;
void F(void);

void F(void)
{
    result = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}
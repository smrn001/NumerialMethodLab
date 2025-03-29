#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x * x -3 * x + 2;
}

float g(float x)
{
    return 2 * x - 3;
}

#define E 0.0001

int main()
{

    float x0, x1;
    float f0, g0;

    printf("Enter an initail guess value : ");
    scanf("%f", &x0);

lable:
    f0 = f(x0);
    g0 = g(x0);
    x1 = x0 - (f0 / g0);

    // test for accuracy
    if (fabs((x1 - x0) / x1) < E)
    {
        printf("The root is : %f\n", x1);
        }
    else
    {
        x0 = x1;
        goto lable;
    }
    return 0;
}
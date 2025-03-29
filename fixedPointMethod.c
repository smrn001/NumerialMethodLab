// fixed point method

#include <stdio.h>
#include <math.h>

float g(float x)
{
    return 2 - x * x;
}
#define E 0.0001

int main()
{

    float x0, x1, f0, f1;
    printf("Enter initial guess value : ");
    scanf("%f", &x0);

label:
    x1 = g(x0);

    // test for accuracy
    if (fabs((x1 - x0) / x1) < E)
    {
        printf("The root is : %f\n", x1);
    }
    else
    {
        x0 = x1;
        goto label;
    }

    return 0;
}
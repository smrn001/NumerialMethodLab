#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x * x - 4 * x - 10;
}

#define E 0.0001

int main()
{
    float x1, x2, x3, f1, f2, x0, f0;

    printf("Enter two initail guess value : ");
    scanf("%f %f", &x1, &x2);

label:
    f1 = f(x1);
    f2 = f(x2);
    x3 = x2 - ((f2 * (x2 - x1)) / (f2 - f1));

    // test for accuracy
    if (fabs((x3 - x2) / x3) < E)
    {
        printf("The root is : %f\n", x3);
    }
    else
    {
        x1 = x2;
        x2 = x3;
        goto label;
    }
    return 0;
}
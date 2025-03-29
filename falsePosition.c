
//  program to find root of a function using False Position method

#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x * x - x - 2;
}
#define E 0.0001

int main()
{

    float x0, x1, x2;
    float f0, f1, f2;
lable:
    printf("Enter two initail guess value : ");
    scanf("%f %f", &x1, &x2);

lable2:
    f1 = f(x1);
    f2 = f(x2);
    if (f1 * f2 > 0)
    {
        printf("The root does not  converge please choose next guess value \n");
        goto lable;
    }
    else
    {

        x0 = x1 - (f1 * (x2 - x1) / (f2 - f1));
        f0 = f(x0);
        if (f0 == 0)
        {
            printf("The root is : %f\n", x0);
            return 0;
        }
        if (f1 * f0 < 0)
        {
            x2 = x0;
        }
        if (f0 * f2 < 0)
        {
            x1 = x0;
        }

        // test for accuracy
        if (fabs((x2 - x1) / x2) < E)
        {
            printf("The root is : %f\n", x0);
            return 0;
        }
        else
        {
            goto lable2;
        }
    }

    return 0;
}
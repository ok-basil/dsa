#include <stdio.h>

double e(int x, int n)
{
    double s = 1;
    int i;

    double num = 1;
    double den = 1;

    for (i = 1; i <= n; i++)
    {
        num = num * x;
        den = den * i;
        s = s + num/den;
    }
    return s;
}

int main(void)
{
    double result = e(2, 10);
    printf("%lf \n", result);
    return 0;
}
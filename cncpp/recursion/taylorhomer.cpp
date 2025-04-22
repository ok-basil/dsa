#include <stdio.h>

double e(int x, int n)
{
    static double s = 1;
    
    if (n == 0)
    {
        return s;
    }
    else {
        s = 1 + x*s/n;
        return e(x, n-1);
    }
}

int main(void)
{
    double result = e(2, 10);
    printf("%lf \n", result);
    return 0;
}

#include <stdio.h>

int fib(int n)
{
    int t0 = 0, t1 = 1, s, i;
    for (i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return t1;
}

int main(void)
{
    int result;
    result = fib(5);
    printf("%d \n", result);
}
#include <stdio.h>

int fib(int n)
{
    if (n <=1 )
    {
        return n;
    }
    else {
        return fib(n-2) + fib(n-1);
    }
}

int main(void)
{
    int result;
    result = fib(7);
    printf("%d \n", result);
}

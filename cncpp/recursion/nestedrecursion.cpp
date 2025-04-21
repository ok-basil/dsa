#include <stdio.h>

int fun(int n)
{
    if (n > 100)
    {
        return n-10;
    }
    else {
        return fun(fun(n+11));
    }
}

int main(void)
{
    int x;
    x = fun(95);
    printf("%d\n", x);
    return 0;
}

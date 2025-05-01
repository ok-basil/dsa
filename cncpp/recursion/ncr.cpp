#include <stdio.h>

int fact(int n)
{
    if (n == 0){
        return 1;
    }
    else {
        return fact(n-1)*n;
    }
}

int ncr(int n, int r)
{
    int num, den;

    num = fact(n);
    den = fact(r) * fact(n-r);
    return num/den;
}

int nCr(int n, int r)
{
    if (n == r || r == 0)
    {
        return 1;
    }
    return nCr(n-1, r-1) + nCr(n-1, r);
}

int main(void)
{
    printf("%d\n", nCr(5, 2));
    return 0;
}
#include <stdio.h>

// int fib(int n) Excessive recursive calls
// {
//     if (n <=1 )
//     {
//         return n;
//     }
//     else {
//         return fib(n-2) + fib(n-1);
//     }
// }

int fib(int n)

int main(void)
{
    int result;
    result = fib(7);
    printf("%d \n", result);
}

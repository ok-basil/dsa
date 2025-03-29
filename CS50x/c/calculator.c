#include <stdio.h>

int add(int a, int b);

int main(void)
{
    int x = 10;
    int y = 20;

    int sum = add(x, y);
    print("Sum: %i\n", sum);
}

int add(int a, int b)
{
    return a + b;
}
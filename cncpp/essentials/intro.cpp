#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectagle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectagle r1={10,5};

    printf("%d\n", sizeof(r1));
}
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r;
    r.length = 10;
    r.breadth = 5;

    struct Rectangle *p;
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p = new Rectangle;
    p->length = 20;
    p->breadth = 10;

    printf("%d %d\n", p->length, p->breadth);
    free(p);
    return 0;    
}
#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b) 
{
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r) 
{
    return (r.length * r.breadth);
}

void changelength(struct Rectangle *r, int l)
{
    r->length = l;
}

int main()
{
    struct Rectangle rect;
    initialize(&rect, 100, 20);
    printf("Length: %d, Breadth: %d\n", rect.length, rect.breadth);
    area(rect);
    printf("Area of rectangle is: %d\n", area(rect));
    changelength(&rect, 200);
    printf("New length of the rectangle is: %d\n", rect.length);

    return 0;
}
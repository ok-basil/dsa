#include <iostream>
using namespace std;

 class Rectangle
 {
 private:
    int length;
    int breadth;

 public:
    Rectangle()
    {
        length=0;
        breadth=0;
    }

    Rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        int p;
        p = 2 * (length + breadth);
        return p;
    }

    void setLength(int l)
    {
        length = l;
    }

    void setBreadth(int b)
    {
        breadth = b;
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }
    ~Rectangle()
    {
        cout << "Destructor called" << endl;
    }
 };

 int main()
 {
    Rectangle r={0,0};

    int l, b;
    cout << "Enter length and breadth; ";
    cin >> l >> b;

    r = Rectangle(l, b);
    int area = r.area();
    int perimeter = r.perimeter();

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
 }
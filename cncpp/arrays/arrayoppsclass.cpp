#include <iostream>

using namespace std;

class Array
{
    private:
        int *A;
        int size;
        int length;

    public:
        Array()
        {
            size = 10;
            A = new int[10];
            length = 0;
        }

        Array(int sz)
        {
            size = sz;
            length = 0;
            A = new int[size];
        }

        ~Array()
        {
            delete []A;
        }

        void Display();
        void Insert(int index, int x);
        int Delete(int index);
};

void Array::Display()
{
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void Array::Insert(int index, int x)
{
    if (index >= 0 && index <= length)
    {
        for (int i = length - 1; i >= index; i--)
        {
            A[i + 1] = A[i];
        }
        A[index] = x;
        length++;
    }
}

int Array::Delete(int index)
{
    int x = 0;

    if (index >= 0 && index < length)
    { 
        x = A[index];
        for (int i = index; i < length - 1; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
    }
    return x;
}

int main()
{
    Array arr(10);

    arr.Insert(0, 5);
    arr.Insert(1, 6);
    arr.Insert(2, 7);
    arr.Insert(3, 8);
    arr.Insert(4, 9);
    arr.Insert(5, 10);

    arr.Display();
    
    return 0;
}
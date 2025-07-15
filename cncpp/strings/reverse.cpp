#include <iostream>
using namespace std;

void reverse(char A[]);
void reverse2(char B[]);

int main() {
    char A[] = "Python";
    char B[] = "Alexander";
    
    // reverse(A);
    reverse2(B);
    return 0;
}

// Reverse copy a string using another array
void reverse(char A[])
{
    int i;
    int j;
    char B[10];

    for (i = 0; A[i] != '\0'; i++)
    {

    }
    i = i - 1;
    for (j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    cout << "Reversed string is " << B << endl;
}

// Reversing a string with the same array
void reverse2(char B[])
{
    int i, j;

    for (j = 0; B[j] != '\0'; j++)
    {

    }
    j = j - 1;
    for (i = 0; i < j; i++, j--)
    {
        int temp;
        temp = B[i];
        B[i] = B[j];
        B[j] = temp;
    }

    cout << "Reversed string is " << B << endl;
}
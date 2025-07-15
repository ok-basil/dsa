#include <iostream>
using namespace std;

void reverse(char A[]);
int main() {
    char A[] = "Python";
    
    reverse(A);
    return 0;
}

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
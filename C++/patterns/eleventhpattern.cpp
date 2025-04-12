#include <iostream>
using namespace std;

void pattern(int n);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    pattern(n);
    return 0;
}

void pattern(int n)
{
    int space = 2*n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
 
        cout << endl;
        space -= 2;
    }
}
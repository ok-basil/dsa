#include <iostream>
using namespace std;

void pattern(int n);

int main()
{
    int n;
    cout << "Enter the number of terms you want to see: ";
    cin >> n;
    pattern(n);
    return 0;
}

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
         {
         cout << ' ';
         }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << '*';
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << ' ';
        }
        cout << endl;
    }
}
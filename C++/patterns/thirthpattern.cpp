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
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
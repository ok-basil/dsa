#include <iostream>
using namespace std;

void pattern(int n);

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern(n);
}

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < i; j++)
      {
        cout << " ";
      }

      for (int j = 0; j < (2*n - (2*i + 1)); j++)
        {
          cout << "*";
        }

      for (int j = 0; j < i; j++)
      {
        cout << " ";
      }
      cout << endl;
    }
}
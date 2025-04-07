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
  for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
          {
            cout << "* ";
          }
          cout << endl;
    }
}
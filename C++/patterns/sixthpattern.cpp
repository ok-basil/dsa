#include <iostream>
using namespace std;

void pattern(int n);

int main()
{
  int n;
  cout << "Enter a number: " << endl;
  cin >> n;
  pattern(n);
}

void pattern(int n)
{
  for (int i = n; i >= 1 ; i--)
    {
      for (int j = 1; j <= i; j++)
        {
          cout << j << " ";
        }
        cout << endl;
    }
}
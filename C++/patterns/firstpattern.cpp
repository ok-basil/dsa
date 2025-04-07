//
// Created by Basil on 07/04/2025.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <queue>
#include <stack>
#include <cmath>
#include <limits>

using namespace std;
void pattern(int n);

int main()
{
    int number;
    cout << "Please enter a number:" << endl;
    cin >> number;
    pattern(number);
}

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
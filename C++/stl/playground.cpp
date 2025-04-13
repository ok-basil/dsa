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

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    vector<int>::iterator it = v.begin();

    vector<int>::iterator it2 = v.end();

    it2--;

    cout << *it << endl;

    cout << *it2 << endl;
    return 0;
}
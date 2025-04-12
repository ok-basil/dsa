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
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    cout << v[0] << endl;
    cout << v[1] << endl;
    return 0;
}
#include <iostream>
#include <stdlib.h>
using namespace std;

struct student
{
    int A[5];
    int num;
};
void print(struct student some)
{
    for (int i = 0; i < some.num; i++)
    {
        cout<< some.A[i]<<endl;
    }
}
int main()
{
    struct student s = {{1, 2, 3, 4, 5}, 5};
    print(s);
}
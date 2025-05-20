#include <stdio.h>
#include <stdlib.h>

struct Array {
    int A[10];
    int size;
    int length;
};

int BinarySearch(struct Array arr, int key)
{
    int l, h, mid;
    l = 0;
    h = arr.length - 1;
    
    while (l <= h)
    {
        mid = (l + h)/2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }    
}

int main(void)
{
    struct Array arr = {{1,2,3,4,5,6,7,8,9,10}, 10, 10};

    return 0;
}
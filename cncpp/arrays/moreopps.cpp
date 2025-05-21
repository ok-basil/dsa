#include <stdio.h>
#include <stdlib.h>

struct Array {
    int A[10];
    int size;
    int length;
};

int GetNumber(struct Array arr, int index)
{
    int l;
    l = arr.length - 1;
    
    if (index >=0 && index <= l)
    {
        return arr.A[index];
    }
    
    return -1;
}

int SetValueAtIndex(struct Array *arr, int index, int value)
{
    int l;
    l = arr->length - 1;
    
    if (index >=0 && index <= l)
    {
        arr->A[index] = value;
    }
    
    return -1;
}

int MaxValue(struct Array arr)
{
    if (arr.length == 0)
    {
        return -1;
    }
    
    int max, l, i;
    l = arr.length;
    i = 0;
    max = arr.A[0];
    
    for (i = 0; i < l; i++)
    {
        if (max < arr.A[i])
        {
            max = arr.A[i];
        }
    }
    return max;
}

int MinValue(struct Array arr)
{
    if (arr.length == 0)
    {
        return -1;
    }

    int min, l, i;
    l = arr.length;
    i = 0;
    min = arr.A[0];

    for (i = 0; i < l; i++)
    {
        if (min > arr.A[i])
        {
            min = arr.A[i];
        }
    }
    return min;
}
int sumOfArray(struct Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum = sum + arr.A[i];
    }
    return sum;
}

int Average(struct Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum = sum + arr.A[i];
    }
    return sum/arr.length;
}

void DisplayArr(struct Array arr)
{
    int i = 0;
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

int main(void)
{
    struct Array arr = {{2,4,6,8,10,12,14,16,18,20},10,10};
//    printf("%d \n", GetNumber(arr, 3));
//    DisplayArr(arr);
//    SetValueAtIndex(&arr, 3, 30);
//    DisplayArr(arr);
    printf("%d \n", MaxValue(arr));
    
    return 0;
}

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

void ReverseArray(struct Array *arr)
{
    int len = arr->length - 1;
    
    for (int i = 0; i < len; i++, len-- )
    {
        int temp = arr->A[len];
        arr->A[len] = arr->A[i];
        arr->A[i] = temp;
    }
    
    printf("The reversed array is: ");
    
    for (int i = 0; i < arr->length; i++)
    {
        printf("%d ", arr->A[i]);
    }
    printf("\n");
}

void ReverseArray2(struct Array *arr)
{
    int *B;
    int i, j;
    
    B = (int *)malloc(arr->length*sizeof(int));
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = arr->A[i];
    }
    
    for (i = 0; i < arr->length; i++)
    {
        arr->A[i] = B[i];
    }
    
    free(B);
    
    printf("The reversed array is: ");
    
    for (i = 0; i < arr->length; i++)
    {
        printf("%d ", arr->A[i]);
    }
    printf("\n");
}

int Average(struct Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum = sum + arr.A[i];
    }
    return (float) sum/arr.length;
}

void InsertSort(struct Array *arr, int x)
{
    if (arr->length == arr->size)
        return;
    
    int i = arr->length - 1;
    while (i >=0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
}

// Sorted in ascending order
void IsArraySorted(struct Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i + 1] < arr.A[i])
        {
            printf("Not sorted");
        }
    }
    printf("Sorted in ascending order! \n");
}

struct Array* MergeArray(struct Array *a1, struct Array *a2)
{
    int i = 0, j = 0, k = 0;
    struct Array *a3 = (struct Array *)malloc(sizeof(struct Array));

    while ( i < a1->length && j < a2->length )
    {
        if (a1->A{i} < a2->A[j])
        {
            a3->A[k++] = a1->A[i++];
        }
        else 
        {
            a3->A[k++] = a2->A[j++];
        }
    }
    for ( ; i < a1->length; i++ )
        a3->A[k++] = a1->A[i];
    for ( ; j < a2->length; j++ )
        a3->A[k++] = a2->A[j];
    a3->size = a1->length + a2->length;
    a3->length = k;

    return a3;
}

struct Array* UnionArray(struct Array *a1, struct Array *a2)
{
    int i = 0, j = 0, k = 0;
    struct Array *a3 = (struct Array *)malloc(sizeof(struct Array));

    while ( i < a1->length && j < a2->length )
    {
        if (a1->A[i] < a2->A[j])
        {
            a3->A[k++] = a1->A[i++];
        }
        else if (a1->A[i] > a2->A[j])
        {
            a3->A[k++] = a2->A[j++];
        }
        else 
        {
            a3->A[k++] = a1->A[i++];
            j++;
        }
    }
    for (; i < a1->length; i++)
        a3->A[k++] = a1->A[i];
    for (; j < a2->length; j++)
        a3->A[k++] = a2->A[j];
    a3->size = a1->length + a2->length;
    a3->length = k;
    
    return a3;
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

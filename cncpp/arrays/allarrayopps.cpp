#include <iostream>

using namespace std;

struct Array 
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr);
void Append(struct Array *arr, int x);
void Insert(struct Array *arr, int index, int x);
void swap(int *x, int *y);
int LinearSearch(struct Array arr, int key);
int BinarySearch(struct Array arr, int key);
int RBinSearch(int a[], int l, int h, int key);
int Get(struct Array arr, int index);
void Set(struct Array *arr, int index, int x);
int Max(struct Array arr);
int Min(struct Array arr);
int Sum(struct Array arr);
int RecursiveSum(struct Array arr);
int TailRecursiveSum(struct Array arr, int n, int acc)
float Avg(struct Array arr);
void Reverse(struct Array *arr);
void Reverse2(struct Array *arr);
void InsertSort(struct Array *arr, int x);
int isSorted(struct Array arr);
void Rearrange(struct Array *arr);
struct Array* Merge(struct Array *arr1, struct Array *arr2);
struct Array* Union(struct Array *arr1, struct Array *arr2);
struct Array* Intersection(struct Array *arr1, struct Array *arr2);
struct Array* Difference(struct Array *arr1, struct Array *arr2);
struct Array* MergeSorted(struct Array *arr1, struct Array *arr2);

void Display(struct Array arr)
{
    int i;
    printf("Elements are \n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}

void Insert(struct Array *arr, int index, int x)
{
    if ( index < 0 || index > arr->length || arr->length == arr->size)
    return;

    for (int i = arr->length - 1; i >= index; i--)
        arr->A[i + 1] = arr->A[i];

    arr->A[index] = x;
    arr->length++;
}

int Delete(struct Array *arr, int index)
{
    int x = 0;
    
    if (index < 0 || index >= arr->length)
        return -1;

    x = arr->A[index];

    for (int i = index; i < arr->length - 1; i++)
        arr->A[i] = arr->A[i + 1];

    arr->length--;
    return x;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            if ( i > 0 )
                swap(&arr.A[i], &arr.A[0]);
            return i;
        }
    }

    return -1;
}

int BinarySearch(struct Array arr, int key)
{
    int l, mid, h;
    l = 0;
    h = arr.length - 1;

    while (l <= h )
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        } else if (key < arr.A[mid])
        {
            h = mid - 1;         
        } else {
            l = mid + 1;
        }
    }

    return -1;
}

int RBinarySearch(int a[], int l, int h, int key)
{
    int mid;

    if (l <= h)
    {
        mid = (l + h) /2 ;
        if ( key == a[mid])
            return mid;
        else if (key < a[mid])
        {
            return RBinarySearch(a, l, mid -1, key);
        } else {
            return RBinarySearch(a, mid + 1, h, key);
        }
    }

    return -1;
}

int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.A[index];
    }

    return -1;
}

void Set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = x;
    }
}

int Max(struct Array arr)
{
    int max = arr.A[0];

    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }

    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];

    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }

    return min;
}

int Sum(struct Array arr)
{
    int sum = 0;

    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }

    return sum;
}

int RecursiveSum(struct Array arr, int n)
{
    if (n < 0)
        return 0;
    else
        return RecursiveSum(arr, n - 1) + arr.A[n];
}

int TailRecursiveSum(struct Array arr, int n, int acc)
{
    if (n < 0)
        return acc;
    return TailRecursiveSum(arr, n - 1, acc + arr.A[n]);
}

float Avg(struct Array arr)
{
    return (float)Sum(arr) / arr.length;
}

void Reverse(struct Array *arr)
{
    int *B;
    int i, j;

    B = (int *)malloc(arr->length * sizeof(int));

    for (i = arr->length -1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];

    for (i = 0; i < arr->length; i++)
        arr->A[i] = B[i];
}

void Reverse2(struct Array *arr)
{
    int i, j;

    for (i = 0, j = arr->length - 1; i < j; i++, j--)
        swap(&arr->A[i], &arr->A[j]);
}

void InsertSort(struct Array *arr, int x)
{
    int i = arr->length - 1;

    if (arr->length == arr->size)
        return;

    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }

    arr->A[i + 1] = x;
    arr->length++;
}

int isSorted(struct Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + i])
            return 0;
    }

    return 1;
}

void Rearrage (struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;

    while (i < j)
    {
        while (arr->A[i] < 0) i++;
        while (arr->A[j] >= 0) j--;
        if (i < j)
            swap(&arr->A[i], &arr->A[j]);
    }
}

struct Array
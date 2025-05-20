#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr){
    int i;
    printf("Elements in array are: \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

void append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}

void insert(struct Array *arr, int index, int x)
{
    int i;
    if (arr->length == arr->size)
    {
        if (index >= 0 && index <= arr->length)
        {
            for (i = arr->length; i > index; i--)
            {
                arr->A[i] = arr->A[i-1];
            }
            arr->A[index] = x;
            arr->length++;
        }
    }
}

void deleteElement(struct Array *arr, int index)
{
    int i;
    if (arr->length > 0 && index >= 0 && index < arr->length){
        for (i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
    }
}

int main(void)
{
    struct Array arr = {{2,3,4,5,6}, 10, 5};
     
//    insert(&arr, 3, 40);
//    append(&arr, 10);
    // deleteElement(&arr, 2);
    display(arr);
    
    return 0;
}

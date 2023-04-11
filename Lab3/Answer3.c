#include <stdio.h>
#include <stdlib.h>
//3- Write a program in C to find the second largest element in an array
void swap(int *xp, int *yp);
void selectionSort(int arr[], int n);
int main()
{
    int size;
 printf("enter your array size:");
    scanf(" %d",&size);
    int arr[size];
    printf("enter your array elements:");
    for(int i=0;i<size;i++)
        scanf(" %d",&arr[i]);
    selectionSort(&arr,size);

    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("the second Largest element:%d\n",arr[size-2]);
    return 0;
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
           if(min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
}

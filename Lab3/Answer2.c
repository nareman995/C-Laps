#include <stdio.h>
#include <stdlib.h>
//2-C Program to find the minimum & maximum value of array elements. (Min_Max Array)
int main()
{
    int min,max,size;
    printf("enter your array size:");
    scanf("%d",&size);
    int arr[size];
    printf("enter your array elements:");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);

    min=arr[0];
    max=arr[1];
     for(int i=0;i<size;i++)
     {
         if(max<arr[i])
         {
             max=arr[i];
         }
         if(min>arr[i])
         {
             min=arr[i];
         }
     }
     printf("max number is:%d\n",max);
     printf("min number is:%d",min);
    return 0;
}

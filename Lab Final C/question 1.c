#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//1- Write a function to reverse a string by passing it to a function without using strrev function.

char *reverse_string(char *arr,int size);
int main()
{
    int size;
   char arr[100],*arr1;
    printf("Enter your text:");
   scanf(" %s",&arr);
   size= strlen(arr);
   arr1=reverse_string(&arr,size);
   printf("%s",arr1);
   free(arr1);
    return 0;
}
char *reverse_string(char *arr,int size)
{
int i=0;
i=size-1;
 char *arr2=malloc(size);
for(int j=0;j<size;j++)
{
    arr2[j]=arr[i];
    i--;
}
return arr2;
}

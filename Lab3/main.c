#include <stdio.h>
#include <stdlib.h>
//1- C Program to take an array elements from user, then print them out "using 2 for loops". (Print Array)
int main()
{
  int size;
  printf("enter your size:");
  scanf("%d\n",&size);
  int arr[size];

  for(int i=0;i<size;i++)
  scanf("%d",&arr[i]);


  for(int i=0;i<size;i++)
  printf("%d\n",arr[i]);

    return 0;
}

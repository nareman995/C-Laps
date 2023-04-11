#include <stdio.h>
#include <stdlib.h>
/*5- Write a C program in C to find the count of the longest consecutive occurrence of a given number in an array. Example:
   Array={1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3 , result = 4*/
int main()
{
 int size,counter=1,max_count=0,target_no;
 printf("enter your array size:");
    scanf(" %d",&size);
    int arr[size];
    printf("enter your array elements:");
    for(int i=0;i<size;i++)
        scanf(" %d",&arr[i]);

     printf("enter your searching No.:");
      scanf(" %d",&target_no);

      for(int i=0;i<size;i++)
      {

        if(target_no==arr[i]&&arr[i]==arr[i+1])
          {
              counter++;
          }
      else
      {
          if(max_count<counter)
          {
              max_count=counter;
          }
          counter=1;
      }
      }
      printf("longest consecutive occurrence of a given number in an array:%d\n",max_count);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*4- You are given a string s. You need to reverse the string.
   Input: char s [] = Geeks
   Output: skeeG*/
int main()
{
    int size,k=0;
    printf("enter your array size:");
    scanf(" %d",&size);
    char arr[size];
    printf("enter your string:");
    for(int i=0;i<size;i++)
        scanf(" %c",&arr[i]);

        char arr2[size];
        k=size-1;
        for (int j=0;j<size;j++)
         {
             arr2[j]=arr[k];
            k--;
         }

    for(int i=0;i<size;i++)
        printf("%c",arr2[i]);

    return 0;
}

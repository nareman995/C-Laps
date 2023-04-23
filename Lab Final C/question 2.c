#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//2- Write a function to concatenate two strings without using strcat function.
char *concat_str(char *arr1,char *arr2);
int main()
{
    char arr1[100],arr2[100],*arr3;
    printf("Enter your first text:");
    scanf("%s",&arr1);
    printf("Enter your second text:");
    scanf("%s",&arr2);
    arr3=concat_str(&arr1,&arr2);
    printf("Here is your concatenated text:%s",arr3);
    free(arr3);
    return 0;
}
char *concat_str(char *arr1,char *arr2)
{
    int size1,size2,size3;
    size1=strlen(arr1);
    size2=strlen(arr2);
    size3=(size1+size2)-1;
    char *concat_string=malloc(size3);
    for(int i=0;i<size1;i++)
    {
        concat_string[i]=arr1[i];
    }
     for(int i=0;i<size2;i++)
    {
        concat_string[i+(size1)]=arr2[i];
    }
    return concat_string;
}

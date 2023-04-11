#include<stdio.h>
#include<stdlib.h>
/*12-Write a C program to print the multiplication table in ascending
order from table 1 to table 10 sequentially and separated by group of " *'s ". */
int main()
{
    for(int i=1;i<=10;i++)
    {
     printf("****************\n");
     printf("****************\n");
     for(int j=1;j<=10;j++)
     {
      printf("** %d*%d=%d",j,i,j*i);
      printf("  ");
      printf("**\n");
     }
    }
    printf("****************\n");
    printf("****************\n");

    return 0;
}

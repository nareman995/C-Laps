#include<stdio.h>
#include<stdlib.h>
//11-Receive numbers from the user, and exit when the sum exceeds 100.
int main()
{
    int a=0,sum=0;
    printf("enter your numbers want to sum:\n");
    while(sum<=100)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("you exceed the 100 summation value!\n");
    return 0;
}

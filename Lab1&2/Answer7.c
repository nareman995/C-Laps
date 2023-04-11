#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//7-C Program to compute Quotient and Remainder
int main()
{
    int a,b;
    int quotient=0,remainder=0;
    printf("enter your two integer numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    quotient=a/b;
    remainder=a%b;
     printf("your Quotient is:%d\n",quotient);
     printf("your Remainder is:%d\n",remainder);
    return 0;
}

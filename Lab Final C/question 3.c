#include <stdio.h>
#include <stdlib.h>
#include<string.h>
//3-Write a function to  swap two numbers in c without using third variable(2 Methods).
void swap1(int,int);
void swap2(int,int);
int main()
{
    int num1 ,num2;
    printf("Enter your 1st number:");
    scanf("%d",&num1);

    printf("Enter your 2nd number:");
    scanf("%d",&num2);
    //swap1(num1,num2);
    swap2(num1,num2);
return 0;
}
void swap1(int num1,int num2)
{
    //using sum & subtract method
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("a= %d b=%d",num1,num2);
}
void swap2(int num1,int num2)
{
    //using XOR method
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    printf("a= %d b=%d",num1,num2);
}

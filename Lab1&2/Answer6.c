#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//6 - C Program to make simple calculations (add, sub, multiply, divid) on two integers
int main()
{
   int operation_no=0;
   int a=0,b=0;
   double result=0;
   bool choice=true;
   char ch;
   while(choice)
   {
    printf("choose your operation 1-add,2-sub,3-multiply,4-divide:");
    scanf("%d",&operation_no);
    printf("Enter your two numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(operation_no==4 && b==0)
    {
        printf("division should be non zero divide number/0\n");
    }

    switch(operation_no)
    {
    case 1:
        result=a+b;
        printf(" your sum is %f\n",result);
        break;
    case 2:
        result=a-b;
        printf(" your subtraction is %lf\n",result);
        break;
    case 3:
        result=a*b;
        printf("your multiplication is %lf\n",result);
        break;
    case 4:
        if(b!=0)
       {
      result=(double)a/b;
        printf("your division is %.2lf\n",result);
        break;
      }
    }
     printf("do you want to continue?(y/n):\n");
     scanf(" %c",&ch);
     if(ch == 'n')
        choice=false;
     else if(ch == 'y')
        choice=true;
   }
 return 0;
}

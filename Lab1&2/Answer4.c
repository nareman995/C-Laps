#include <stdio.h>
#include <stdlib.h>
 int main()
 {

     int a=0,b=0,choice=1;
     int sum=0;
     while(choice)
     {
     printf("Enter your two integer numbers to addition:\n");
     scanf("%d \n",&a);
     scanf("%d",&b);
     sum =(a+b);
     printf("the sum of two integer number is: %d",sum);
     printf("want to continue(y/n):");
     scanf("%d",&choice);
     switch(choice)
     {
     case 1:
      continue;

     case 0:
      break;
     }

     }
     return 0;
 }

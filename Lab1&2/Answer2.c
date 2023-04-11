#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool choice=true;
    char C,c;
     while(choice)
     {
    printf("Enter your character:");
    scanf(" %c",&C);
    printf("the ASCII of your character: %c = %d \n",C,C);
     printf("want to continue(y/n):");
     scanf(" %c",&c);
     if(c == 'y')
     {
         choice = true;
     }
     else{choice = false;}
     }
return 0;
}

#include<stdio.h>
#include<stdlib.h>
//10-C Program to Check Whether a Character is an Alphabet or not
int main()
{
    char ch;
    printf("Enter your character :");
    scanf("%c",&ch);
    if (isalpha(ch) == 0)
         printf("%c is not an alphabet.", ch);
    else
         printf("%c is an alphabet.", ch);

   return 0;
}

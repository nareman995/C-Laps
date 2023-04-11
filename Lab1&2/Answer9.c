#include<stdio.h>
#include<stdlib.h>
//9-C Program to Generate Multiplication Table "1*3=3, 2*3=6, ..."
int main()
{
    int i=3;
    int j=1;
    printf("multiplication table\n");
    while(j<=10)
    {
    printf("%d*%d=%d\n",j,i,i*j);
    j++;
    }
    return 0;
}

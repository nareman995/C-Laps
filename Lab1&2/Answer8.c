#include<stdio.h>
#include<stdlib.h>
//8-C Program to Find the Largest Number Among Three Numbers
int main()
{
    double a=0,b=0,c=0,max=0;
    printf("please enter your numbers:");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    max=a;
    if(max<b)
    {
        max=b;
        if(max<c)
        {
            max=c;
        }

    }
    else if( max<c)
    {
        max=c;
    }
    printf("your largest number is:%lf\n",max);
    return 0;
}

//Check whether the given number is perfect or not

#include<stdio.h>

void main()
{
    int n,a=0,b=0,rem;
    printf("enter number:");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        n=n/10;
        b=b*10+rem;

    }
    printf("%d",b);
}
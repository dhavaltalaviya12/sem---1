#include<stdio.h>

void main()
{
    int a,n=1,i;
    printf("enter a value of a:");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        n=n*i;
    }
     printf("%d",n);
}
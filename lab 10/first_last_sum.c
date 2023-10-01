#include<stdio.h>

void main()
{
    int n,b,c;
    printf("enter value:");
    scanf("%d",&n);
    b=n%10;
    while (n!=0)
    {
        c=n%10;
        n=n/10;
        
    }
    
    printf("%d",c+b);

    
    
}
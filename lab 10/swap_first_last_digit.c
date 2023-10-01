#include<stdio.h>
#include<math.h>

void main()
{
    int n,b,c,a=0,d=10,e=1,f,g=0,h,i;
    printf("enter value:");
    scanf("%d",&n);
    b=n%10;
    h=n;
    
    while (n!=0)
    {
        c=n%10;
        n=n/10;
        a=a+1;
    }
    b=b*pow(10,a-1);                          
    h=h/10;
    a=a-2;
    for (int i = 0; i < a; i++)
    {
        f=h%10;
        h=h/10;
        e=e*d;
        g=g+f*e;
    }
    i=g+c+b;
    printf("%d",i);
}
#include <stdio.h>

void main()
{
    int n1, n2, ans = 1, ans1 = 1, i = 2,n = 2, a, b,c;
    printf("enter numbers:");
    scanf("%d %d", &n1, &n2);
    a = n1;
    b = n2;
    if (n1>n2)
    {
        c=n1;
    }
    else
    {
        c=n2;
    }
    
    while (i <= c)

    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            n1 = n1 / i;
            n2 = n2 / i;
            ans = ans * i;
            i = 2;
        }
        else if (n1 % i == 0)
        {
            n1 = n1 / i;
            ans = ans * i;
            i = 2;
        }
        else if (n2 % i == 0)
        {
            n2 = n2 / i;
            ans = ans * i;
            i = 2;
        }
        else
        {
            i++;
        }
    }
     printf("lcm=%d\n", ans);

    while (n <= c)

    {
        if ((a % n == 0) && (b % n == 0))
        {
            ans1 = ans1 * n;
            a /= n;
            b /= n;
            n = 2;
        }
        else
        {
            n++;
        }
    }
    if (ans1 == 1)
    {
        printf("1");
    }
    else
    {
        printf("hcf=%d", ans1);
    }
}
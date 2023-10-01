#include<stdio.h>

void main(){
    int choice,count;
    int n1,n2;

    start:
    printf("[1] For a specific number \n[2] For range\n");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    
    switch (choice)
    {
    case 1:
        printf("\nEnter a number : ");
        scanf("%d",&n1);
        for (int i = 2; i < n1; i++)
        {
            if (n1%i==0)
            {
               count==count++;
            }
        }
        if(count==0 || n1==2){
            printf("%d is a prime number",n1);
        }
        else
        {
            printf("%d is not a prime number",n1);
        }
        break;

    case 2:
        printf("Enter starting number of your range : ");
        scanf("%d",&n1);
        printf("Enetr ending number of your range : ");
        scanf("%d",&n2);

        printf("\nPrime numbers are : ");
        for (int i = n1; i <= n2; i++)
        {
            if (i<2)
            {
                continue;
            }
            else
            {
                count=0;
                for (int j = 2; j < i; j++)
                {
                    if (i%j==0)
                    {
                        count++;
                    }
                }
                if (count==0)
                {
                    printf("%d ",i);
                }
            }
        }
        break;
    
    default:
        printf("---------------------\nEnter a valid choice\n---------------------\n");
        goto start;
        break;
    }
}
#include<stdio.h>

int gcd_numbers(int ,int );

int main()
{
        int n1,n2,gcd;

        printf("Enter 1st number :: ");
        scanf("%d",&n1);
        printf("\nEnter 2nd number :: ");
        scanf("%d",&n2);

        gcd=gcd_numbers(n1,n2);

        printf("\nGCD of two numbers [ %d and %d ] is :: %d\n",n1,n2,gcd);
}


int gcd_numbers(int x,int y)
{
        while(x!=y)
    {
                if(x>y)
                        return gcd_numbers(x-y,y);

                else
                        return gcd_numbers(x,y-x);

        }

        return x;
}

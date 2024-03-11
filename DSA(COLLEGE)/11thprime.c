//To check if the number is prime or not

#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        printf("Enter a number:\n");
        scanf("%d",&n);
        int i,count=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("It is a prime number\n");
        }
        else
            printf("It is not a prime number\n"); 
    }
   return 0;
}
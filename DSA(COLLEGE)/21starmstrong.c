//Check if the given number is armstrong or not

#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        int count=0;
        printf("Enter the number:\n");
        scanf("%d",&n);
        int z=n;
        int a=n;
        while(n!=0)
        {
            n=n/10;
            count++;
        }
        int p=count;
        int sum=0;
        while(z>0)
        {   
            int digit;
            int power=1;
            digit=z%10;
            for(int i=0;i<p;i++)
            {
                power=power*digit;
            }
            sum=sum+power;
            z=z/10; 
        }  
        if(sum==a)
        {
            printf("The given number is an armstrong number\n");
        }
        else
        {
           printf("The given number is not an armstrong number\n"); 
        }         
    }
    return 0;
}
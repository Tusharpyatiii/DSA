//Reverse a number

#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        int count=0;
        printf("Enter a number:\n");
        scanf("%d",&n);
        int p=n;
        while(n>0)
        {
            n=n/10;
            count++;
        }
        printf("%d\n",count);
        int a[count],i;
        if(p>0)
        {
            for(i=0;i<count;i++)
            {
            a[i]=p%10; 
            p=p/10;
            }
        for(i=0;i<count;i++)
            {
                printf("%d",a[i]);
            } 
            printf("\n");
        }
        else
        {
            printf("Enter a valid number\n");
        }
    }
}
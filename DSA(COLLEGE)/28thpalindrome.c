//check for palindrome

#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        printf("Enter a number:\n");
        scanf("%d",&n);
        int p=n;
        int rev=0;
        while(n>0)
        {
            rev=rev*10+(n%10);
            n=n/10;
        }
        if(p==rev)
        {
            printf("The number is palindrome\n");
        }
        else
        {
            printf("The number is not palindrome\n");
        }
    }
    return 0;
}
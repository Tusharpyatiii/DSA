//star patter reverse

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of lines:\n");
    scanf("%d",&n);
    for(j=n;j>0;j--)
    {
        for(i=j;i>0;i--)
        {
            printf("*");
        }
        printf("\n");
    }  
    return 0;
}
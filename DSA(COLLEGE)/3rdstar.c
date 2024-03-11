//star pattern

#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the number of lines:\n");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        for(i=0;i<j;i++)
        {
            printf("*");
        }
        printf("\n");
    }
}
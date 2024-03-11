//addition and subtraction of two matrices

#include<stdio.h>
int main()
{
    int i,j,x,y;
    printf("Enter number of rows and columns:\n");
    scanf("%d%d",&x,&y);
    int a[x][y],b[x][y];
    printf("Enter the values of matrix a:\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the values of matrix b:\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[x][y];
    printf("The addition of both the matrices are:\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    int d[x][y];
    printf("The subtraction of both the matrices are:\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
}
//Multiplication of two matrices

#include<stdio.h>
void multiply(int x,int y,int a[x][y],int b[x][y]);
int main()
{
    int i,j,x,y;
    while(1)
    {
        printf("Enter number of rows and columns:\n");
        scanf("%d%d",&x,&y);
        int a[x][y],b[x][y];
        if(x==y)
        {
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
            multiply(x,y,a,b); 
        }
        else
        {
            printf("Invalid\n");
        }
    }
}
void multiply(int x,int y,int a[x][y],int b[x][y])
{
    int  i,j,k,c[x][y];
            for(i=0;i<x;i++)
            {
                for(j=0;j<y;j++)
                {
                    c[i][j]=0;
                    for(k=0;k<x;k++)
                    {
                        c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                    }
                }
            }
            for(i=0;i<x;i++)
            {
                for(j=0;j<y;j++)
                {
                    printf("%d\t",c[i][j]);
                }
                printf("\n");
            }
}
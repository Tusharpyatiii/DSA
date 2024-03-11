//Merge two arrays

#include<stdio.h>
void merge(int,int,int[],int[]);
int main()
{
    int n,m,i;
    printf("Enter the number of elements in array a and b:\n");
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    printf("Enter elements of array a:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements of array b:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    merge(n,m,a,b);
}
void merge(int n,int m,int a[],int b[])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        a[n]=b[i];
        n++;
    }
    printf("The size of new array is:%d\n",n);
    printf("Merged array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
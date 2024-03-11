//remove duplicate numbers in an array

#include<stdio.h>
void sort(int,int[]);
void removeduplicates(int,int[]);
int main()
{
    int n,i,j,temp,target;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(n,a);
    removeduplicates(n,a);
}
void sort(int n,int a[])
{
    int i,j,temp;
    for(j=0;j<n;j++)
    {
        for(i=0;i<(n-1);i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("The sorted array is:\n");
    {
        for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
    }
}
void removeduplicates(int n,int a[])
{
    int i,j,k,count=0;
    for(j=0;j<n;j++)
    {
        for(i=j;i<n-1;i++)
        {
            if(a[j]==a[i+1])
            {
                for(k=i;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
            }
        }
    }
    printf("The new array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
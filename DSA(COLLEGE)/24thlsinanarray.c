//find the largest and smallest number in an array

#include<stdio.h>
void largest(int,int[]);
int main()
{
    int n,i;
    printf("Enter number of elements of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest(n,a);
}
void largest(int n,int a[])
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
    printf("The Largest element in the array is %d\n",a[n-1]);
    printf("The Smallest element in the array is %d\n",a[0]);
}
//bubble sort

#include<stdio.h>
void main()
{
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int a[n],l,i,j,k,temp;
    printf("Enter %d elements in the array:\n",n);
    for(l=0;l<n;l++)
    {
        scanf("%d",&a[l]);  
    }
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
    printf("The sorted array elements are:\n");
    for(k=0;k<n;k++)
    {
        printf("%d\n",a[k]);
    }
}
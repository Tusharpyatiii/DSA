//binary search

#include<stdio.h>
int sort(int,int[]);
int binary(int,int[],int);
int main()
{
    int n,i,s;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the search element:\n");
    scanf("%d",&s);
    sort(n,a);
    binary(n,a,s);
}
int sort(int n,int a[])
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int binary(int n,int a[],int s)
{
    int mid;
    int l=0,h=n;
    while(l!=h)
    {
        mid=(l+h)/2;
        if(a[mid]==s)
        {
            printf("%d is found at %d\n",s,mid);
            break;
        }
        else if(s>a[mid])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    if(l==h)
    {
        if(a[l]==s)
        {
            printf("%d is found at %d",s,l);
        }
        else
        {
            printf("Element not found\n");
        }
    }
    
}
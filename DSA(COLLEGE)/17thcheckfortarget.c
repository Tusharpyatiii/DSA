#include<stdio.h>
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
    printf("Enter the target:\n");
    scanf("%d",&target);
    for(j=0;j<n-1;j++)
    {
      for(i=j+1;i<n;i++)
        {
            if((a[i]+a[j])==target)
            {
                printf("[%d,%d]",i,j);
            }
        }  
    }
}
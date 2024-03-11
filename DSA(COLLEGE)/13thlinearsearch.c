//linear search

#include<stdio.h>
void sear(int,int,int[]);
int main()
{
    int n,s,i;
    printf("Enter number of elements in an array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter search element:\n");
    scanf("%d",&s);
    sear(n,s,a);
}
void sear(int n,int s,int a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            printf("%d is found at position %d\n",s,i+1);
        }
    }
}
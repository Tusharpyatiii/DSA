//Average of 3 numbers

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter n:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values:\n");
    float res=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        res=res+a[i];
    }
    res=res/n;
    printf("%f\n",res);
    return 0;
}
//swapping using tmep variable

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("The values of a and b respectively before swapping are:%d,%d\n",a,b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The values of a and b respectively after swapping are:%d,%d\n",a,b);
}
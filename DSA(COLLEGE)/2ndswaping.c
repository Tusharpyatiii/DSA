//swapping without using third variable 

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the two numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    int c=a;
    int d=b;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The values before swapping are:a=%d,b=%d\n",c,d);
    printf("The values after swapping are:a=%d,b=%d\n",a,b);
}
//Adding two numbers using separate function

#include<stdio.h>
int add(int,int);
int main()
{
    int a,b,z;
    while(1)
    {
        printf("Enter two numbers:\n");
        scanf("%d%d",&a,&b);
        z=add(a,b);
        printf("The sum of two numbers is %d\n",z);
    }
    return 0;
}
int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
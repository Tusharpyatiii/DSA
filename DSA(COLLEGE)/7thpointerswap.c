//swapping without using third variable using pointers

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers for swapping:\n");
    scanf("%d%d",&a,&b);
    int y=a,z=b;
    int *p,*c;
    p=&a;
    c=&b;
    *p=*p+*c;
    *c=*p-*c;
    *p=*p-*c;
    printf("The values of a and b before swapping are: a=%d,b=%d\n",y,z);
    printf("The values of a and b after swapping are: a=%d,b=%d",*p,*c);
}
//Average of 3 numbers

#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three numbers:\n");
    scanf("%f%f%f",&a,&b,&c);
    float result;
    result=(a+b+c)/3;
    printf("The average of three numbers is:%f",result);
}
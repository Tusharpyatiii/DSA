//Check whether the year is leap year or not

#include<stdio.h>
int main()
{
    int year;
    while(1)
    {
        printf("Enter the year:\n");
        scanf("%d",&year);
        if(year%400==0)
        {
            printf("The given year is a leap year\n");
        }
        else if(year%100==0 && year%4==0)
        {
            printf("The given year is not a leap year\n");
        }
        else if(year%4==0)
        {
            printf("The given year is a leap year\n");
        }
        else
            printf("Invalid\n");   
    }
    return 0;
}
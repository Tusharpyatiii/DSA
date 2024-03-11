//upper case and lower case

#include<stdio.h>
void main()
{
    int i;
    for(i=65;i<91;i++)
    {
        char c=i;
        printf("%c",c);
        char a=i+32;
        printf("%c\n",a);
    }
}
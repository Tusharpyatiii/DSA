//making first letter of every word capital in a sentence

#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000000];
    printf("Enter a sentence:\n");
    scanf("%[^\n]s",a);
    int x;
    int i;
    x=a[0];
    if(x>96 && x<123)
    {
     x=x-32;
     a[0]=x;   
    }
    int p=strlen(a);
    for(i=0;i<p;i++)
    {
        if(a[i]==' ')
        {
            x=a[i+1];
            if(x>96 && x<123)
            {
              x=x-32;
              a[i+1]=x;  
            }
        }
    }
    printf("%s",a);
    return 0;
}
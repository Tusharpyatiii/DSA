//basic calculator using switch 

#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    char d[20];
    while(1)
    {
    printf("Enter two numbers for operation:\n");
    scanf("%d%d",&a,&b);
    printf("Enter the type of operation(Enter as:addition or subtraction or multiplication or division):\n");
    scanf("%s",d);
        switch(d[0])
        {
            int result;
            case 'a':if(strcmp(d,"addition")==0)
                    {
                        result=a+b;
                        printf("The result of the operation is %d\n",result);
                    }
                    else
                    {
                        printf("Invalid operation\n");
                    }
                    break;
            case 's':if(strcmp(d,"subtraction")==0)
                    {
                        result=a-b;
                        printf("The result of the operation is %d\n",result);
                    }
                    else
                    {
                        printf("Invalid operation\n");
                    }
                    break;
            case 'm':if(strcmp(d,"multiplication")==0)
                    {
                        result=a*b;
                        printf("The result of the operation is %d\n",result);
                    }
                    else
                    {
                        printf("Invalid operation\n");
                    }
                    break;
            case 'd':if(strcmp(d,"division")==0)
                    {
                        if(b!=0)
                        {
                        result=a/b;
                        printf("The result of the operation is %d\n",result); 
                        }
                        else if(b==0)
                        {
                            printf("Denominator cannot be zero\n");
                        }
                        else
                        {
                            printf("Invalid operation\n");
                        }
                        
                    }
                    break;
            default: 
                    printf("Invalid operation\n");
                    break;
        }
    return 0;
    }
}
#include<stdio.h>

void main()
{
    short a,b,c;
    printf("Enter value of a = ");
    scanf("%hi",&a);
    printf("Enter value of b = ");
    scanf("%hi",&b);
    printf("Enter value of c = ");
    scanf("%hi",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%hi is the largest number\n",a);
        }
        else
        {
            printf("%hi is the largest number\n",c);
        }
    }
    else if(b>c)
    {
        printf("%hi is the largest number\n",b);
    }
    else
    {
        printf("%hi is the largest number",c);
    }
}
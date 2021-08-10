#include<stdio.h>
void callbyvalue(int, int);
void callbyreference(int *,int *);
void main()
{
    int a,b;
    printf("Enter the value of a and b =");
    scanf("%d%d",&a,&b);
    printf("\n\nCall by Value\n\n");
    printf("Number before swaping \na = %d\nb = %d\n",a,b);
    callbyvalue(a,b);
    printf("Number after swaping \na = %d\nb = %d\n",a,b);
    printf("\n\nCall by Reference\n\n");
    printf("Number before swaping \na = %d\nb = %d\n",a,b);
    callbyreference(&a,&b);
    printf("Number after swaping \na = %d\nb = %d\n",a,b);
}

void callbyvalue(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
}

void callbyreference(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
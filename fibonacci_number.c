#include<stdio.h>

int fib(int);

void main()
{
    printf("Enter the number = ");
    int n;
    scanf("%d",&n);
    printf("Fibonacci number = %d",fib(n));
}

int fib(int n)
{
    if(n<=1 && !(n<0))
    {
        return n;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
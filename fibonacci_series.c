#include<stdio.h>

int fib(int);
int n1=0,n2=1,n3;

void main()
{

    /*// Iterative mode
    int first=0,second=1,next,num;
    printf("Enter the number = ");
    scanf("%d",&num);

    for (int i = 0; i <= num; i++)
    {
        if(i<=1)
        {
            next=i;
        }
        else
        {
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d\n",next);
    }
    */
    

    //Recursive Mode

    int n;
    
    printf("Enter the number");
    scanf("%d",&n);
    fib(n);
}

int fib(int n)
{
    if(n1==0 && n2==1)
    {
        printf("%d\n%d\n",n1,n2);
    }
    if(n>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d\n",n3);
        fib(n-1);
    }
}
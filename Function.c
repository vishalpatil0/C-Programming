#include<stdio.h>
//Also known as procedure and subroutine
//Stages of function
// 1)Declaration  =  must declare before calling 
// 2)Defining     =  can define  after calling it is the body of funciton
// 3)Calling      = call the function by providing paramters

int add(short,short);
int sum(short m, short n)
{
    return m+n;
}
void main()
{
    short a,b;
    printf("Enter the value of two numbers = \n");
    scanf("%hi%hi",&a,&b);


    printf("Addtion of two numbers is %hi+%hi = %i",a,b,add(a,b));
}

int add(short j, short k)
{
    return sum(j,k);
}

#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}
int hello(int b,int c)
{
    printf("hello");
}
void main()
{
    printf("Sum of 5 AND 20 is %d\n",sum(5,20));
    int (*fptr) (int,int);  //declaring a function pointer
    fptr=&sum;              //creating a function pointer
    int d=(*fptr)(5,6);
    printf("The value of 5 + 6 is = %d\n",d);

}
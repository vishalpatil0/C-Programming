/*
Functions pointer are used for callback functions.
We do not allocate de-allocate memory using function pointers.

Function pointers are used to pass a function to a function.
This passed function can be called again hence the name callback function.
This provide programmer to write less code 
*/

#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}

void greet(int (*fptr)(int,int))
{
    printf("The addition is %d\n",fptr(34,32));
}

void main()
{
    int (*ptr) (int,int);
    ptr=&sum;
    greet(ptr);
}
/*
Syntax 
typedef <previous-name> <alias-name>
it basically used to chage the name of the data types
*/
#include<stdio.h>

void main()
{
    typedef int i;
    i a,n=90;
    a=12;
    printf("%d",a);

    typedef int* intpointer;
    intpointer c,b;
    c=&a;
    b=&n;
    //we created two pointer with one syntax means here we didn't have to mention the asterisk symbol twice
}
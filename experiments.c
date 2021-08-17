#include<stdio.h>
#include "expr.c" //importing c file but main should not be there

void main()
{   
    extern int a;
    printf("%d\n",a);
    a=45;
    printf("%d\n",a);
}
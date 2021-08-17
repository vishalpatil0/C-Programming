/*
Void pointer is a pointer that is not associated any data types.
Void pointer can easily type casted to any pointer type.
It is a genreal purpose pointer variable.

Basically it is used to store address of any data type 



In Dynamic memory allocation -
malloc,calloc,realloc,free returns void pointer.
this allows DMA to allocate memeory of any data type.

It is not possible derefernce void pointer directly.
Pointer Arithemetic is not allowed in C pointer with void paramter.

*/

#include<stdio.h>
void main()
{
    int a=32;
    float b=345.555f;
    void *ptr;
    ptr=&a;
    printf("The value of a is %d \n",*(int *)ptr); //type casted pointer into integer type
    ptr=&b;
    printf("The value of b is %f \n",*(float *)ptr); //type casted into float 
}
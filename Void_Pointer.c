/*
Void pointer is a pointer that is not associated any data types.
Void pointer can easily type casted to any pointer type.
It is a genreal purpose pointer variable.

Basically it is used to store address of any data type 

Size of all type pointer is 8 bytes for 64 bit operationg system. [4 byte for 32 bit operating system.]

Difference between void pointer and normal integer pointer is (int *)
--> 
        void pointer also takes 8 byte memory just like integer pointer but when integer pointer get incremented it move to the next address by 4 byte bcoz int is 4 byte but for voide there is no such rule is yet applied but can be after it is type casted. 

In Dynamic memory allocation -
malloc,calloc,realloc,free returns void pointer.
this allows DMA to allocate memeory of any data type.

It is not possible to derefernce void pointer directly.
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
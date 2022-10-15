/*
Void pointer is a pointer that is not associated any data types.
Void pointer can easily type casted to any pointer type.
It is a genreal purpose pointer variable.

Basically it is used to store address of any data type 

Size of all type pointer is 8 bytes for 64 bit operationg system. [4 byte for 32 bit operating system.]

Difference between void pointer and normal integer pointer is (int *)
--> 
        void pointer also takes 8 byte memory just like integer pointer but when integer pointer get incremented it move to the next address by 4 byte bcoz int is 4 byte but for void there is no such rule is yet applied but can be after it is type casted. 

In Dynamic memory allocation -
malloc,calloc,realloc,free returns void pointer.
this allows DMA to allocate memory of any data type.

It is not possible to derefernce void pointer directly.
Pointer Arithmetic is not directly applied to void pointer so to use it before performing incrementationa and decrementation on void pointer make sure you have type casted them in proper data type.


*/

#include<stdio.h>

int sum(void *, void *, void *, void *);

void main()
{
    int A=32;
    float B=345.555f;
    void *ptr;
    ptr=&A;
    printf("The value of a is %d \n",*(int *)ptr); //type casted pointer into integer type
    ptr=&B;
    printf("The value of b is %f \n",*(float *)ptr); //type casted into float 
    

    int a = 10;
    float b = 12;
    char str[] = "vishal";
    int strLength = sizeof(str)/sizeof(str[0]);
    printf("Addtion of 10 and 12 is %d\n",sum(&a,&b,str,&strLength));
}

int sum(void *a, void *b,void *c,void *d){
    printf("name is ");
    for(int i=0;i<*(int *)d;i++){
         printf("%c",*((char *)c+i));
    }
    printf("\n");
    return *(int *)a + *(float *)b;
}
/*
NULL pointer is a pointer which has value reserved for indicating that the pointer or reference does not refer to a valid object.

TO make sure it does not contain garbage value always make it point to a valid object.

Dereferencing a null pointer is undefinied behavior in C.

uses-
    1)to check legitimate address location before accessing any pointer variable 
    2) by doing so we can perfrom error handling while using pointers with c.
    3) when you don't want to pass a memory address pass NULL pointer.

NULL is a macro in header files. 
*/

#include<stdio.h>
void main()
{
    int x=12;
    int *ptr=NULL;  //cannot be dereferenced.
    // ptr=&x;         //now it points to x so it can be referenced.
    // printf("%d",*ptr);    //only ptr gives NULL which is zero 0
    
    if(ptr !=NULL)
    {
        printf("The value of ptr is = %d  \n",*ptr);
    }
    else
    {
        printf("The pointer is a NULL poiner and cannot be dereferenced.\n");
    }
}
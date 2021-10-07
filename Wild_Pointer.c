/*
Uninitilized pointers are known as wild pointer.
These pointer points to the some arbitary location in the memory and may cause a program to crash and behave badly.
Dereferncing wild pointer can cause nasty bugs.
It is suggested that alwyas initlized pointer to NULL.
*/
#include<stdio.h>
void main()
{
    int *ptr;       //this is a wild pointer
    // *ptr=34;     // not a right thing to do .
    int num1=34;
    ptr=&num1;      //not a wild pointer anymore.
    printf("%d\n",*ptr);
}

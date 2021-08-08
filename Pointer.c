/*
Pointer = a variable which stores the address of another variable.
can be of type int, char, array, function or any other pointer. 
size depends on architecture e.g 2 byte for32 bit
Pointer in C language are declread using * (Asterisk symbol)

Null pointer is a pointer which point to nothing.

Address of operator = & [Ampersand Symbol]
Dereference opeartor = * [Asterisk Symbol] return the value of address

Dynamic memory allocation like linked list
pointer reduce the code and improves the performance
*/

#include<stdio.h>

void main()
{
    int a=12;
    printf("Value of \"a\" is =%d\n",a);

    printf("Address of \"a\" is = %p\n",&a); //%p is used to print the address of the variable

    printf("Value of \"a\" fetched through the help of address is =%d\n",*(&a)); //here we took adress first and print the value according to that address

    int *ptr=&a;

    printf("Value of a is through pointer ptr = %d\n",*ptr);
    printf("Address of a is through pointer ptr = %p\n",ptr);
    printf("Address of ptr is = %p\n",&ptr);
    printf("*(*(&ptr))) = %d\n",*(*(&ptr)));
}
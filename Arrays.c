/*
Arrays are collection of data of similar types
iteams are stored in contigous memory locations.
it can store the collection of derived data types such as pointer, structure, etc.
One Dimensional array is like a list.
Two dimensional array is like a table.
In C Language there is no limit on the number of dimension of array.
One dimensinon array known as vectors, two dimensinal array is known as matrices.
Accessing time of array is fast as comapre to linked list, etc.
Data item of array are of same size.

Disadvantages of Array:
Poor time complxity during insertion and deletion of element.
Wastage of memory since array are of same size.
If there is no enough space in the memory then array will not form.
It is not possible to resize array once you declared it.

Notes : if some index of array are not filled then they contains garbage value.
*/

#include<stdio.h>

void main()
{
    int Array1[10]; // Normal array declaration
    Array1[1]=34;   // Array initilzation

    int Array2[]={1,2,3,4}; //In this case size is not required.

    int Array3[3][2]; // Multidimensional array

    // to print the size of an array
    // int length=sizeof(Array1)/sizeof(Array1[0]);
    // printf("%d\n",length);
    // for(short i=0;i<sizeof(Array2)/sizeof(Array2[0]);i++)
    // {
    //     printf("%d\n",Array2[i]);
    // }

    printf("%ls/n",Array2);

}
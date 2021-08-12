/*
Unions are similar to structure but structure's members have their own storage locations but in unions there is shared memory locations

the single shared memory location is equal to the largest data member

we access the data member using the member access operator(.)
*/

#include<stdio.h>
#include<string.h>
typedef union student
{
    int id;
    int marks;
    char name[20];
}std;

void main()
{
    
    s1.id=22;
    s1.marks=340;
    strcpy(s1.name,"vishal");


    printf("Id  =  %d\n",s1.id);
    printf("Name  =  %s\n",s1.name);
    printf("Marks  =  %d\n",s1.marks);
}
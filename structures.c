/*
Structures are user defined data types in c 
It allows to combine data of different data type
it contain data type like int, float and char
more like array but store different data types

array elements are accessed with the help of subscript operator like a[i]
sturcture elements are accessed with [.] dot operator which  is known as structure member operator
*/
#include<stdio.h>
#include<string.h>
#define namesize 100
typedef struct student //here we create alias "std" for "struct student
{
    int id;
    int marks;
    char name[namesize];
}std;
std Vishal;
void main()
{
    Vishal.id=34;
    Vishal.marks=45;
    strcpy(Vishal.name,"Vishal Patil");
    printf("ID = %d\nMarks = %d\nName = %s\n",Vishal.id,Vishal.marks,Vishal.name);

    
    std Namrata={21,300,"vishal patil"};  // should always mention struct keyword before creating variable
    //for string we can use strcpy(namrat.name,"namrata"); method 
    printf("ID = %d\nMarks = %d\nName = %s\n",Namrata.id,Namrata.marks,Namrata.name);    
}
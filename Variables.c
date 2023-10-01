/*
Variable is a container which is used to store the data according to the data type it was created with.
If local and global variable have same name then the local variable will be used.

*/
#include<stdio.h>
int a=12;           //global delcaration
#define max 100     //constant variable created while pre processing 
const int vishal=32;//constant with const keyword which can be change by reinitilizing it
void main()
{
    int a=43;      //local declaration
    printf("%d\n",a); //43
    // int max;     //cannot re initilize constant
    int vishal=4534; //here we re-initilizes the constant keyword
    
}
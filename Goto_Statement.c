#include<stdio.h>

//goto is used to break mulitiple loop statements.
//used to transfer programmed control to predefined label
//also called as jump statement

void main()
{
 vishal:
    printf("loop\n");
    goto disco;
 printf("out of loop\n");
 goto vishal;

 disco:
    printf("so there is nothnig   to do ");

    
}
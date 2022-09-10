#include<stdio.h>

//only int and char are allowed in switch
// if break is not there then all cases get executed
// You can write default in any order in C.
// but make sure then you have added break in default otherwise all the cases below the will get executed.

void main()
{
    printf("Enter a number : ");
    short a;
    scanf("%hi",&a);

    switch (a)
    {
    case 12:
        printf("This is %d\n",12);
        break;
    
    case 14:
        printf("This is %d\n",14);
        
    
    case 16:
        printf("This is %d\n",16);
        break;
    
    default:
        printf("Nothing have matched\n");


    }
}
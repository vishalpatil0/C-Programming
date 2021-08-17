/*
A pointer pointing to freed memory location OR the location whose content has been deleted.

Dangling pointer created due to 
1) Deallocation of memory
2) Returning local variables in function calls.
3) Variable going out of scope.

A) Dangling pointers introduce pointer nasty bugs.
B) Dangling pointers bugs frequently become security holes at times.
C) We can avoid issues by pointing pointer to NULL
D) After de-allocating memeory pointer will no longer dangling.

*/

#include<stdio.h>
#include<stdlib.h>
int *func()
{
    int a=54;
    return &a;
}
void main()
{
    //Case 1 - Deallocation of memory
    int *ptr=(int *) malloc(sizeof(int));
    free(ptr);              //becomes dangling pointer.
    

    //Case 2 - pointing to a variable which is out of scope 
    int *ok=func();
    // printf("%d\n",*ok);

    //Case 3 - Variable goes out of the scope.

    int *dangptr;

    {
        int num1=332;
        dangptr=&num1;
    }
    //now dangptr points to the location which is out off scope
    printf("%d\n",*dangptr);
}
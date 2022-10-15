/*
Storage class are used to define the scope, default initial value and lifetime of a variable.

1- Automatic variable
scope-          local to the function body that they are defined in
default value-  garbage value
lifetime-       till the function have execution

a variable defined without any storage class vairable is auto storage variable

e.g.    auto int a; and int a;  is same


2- external variable

they are same as global variables.

scope-          global to the program they are defined in.
default value-  0
lifetime-       availabe throught the lifetime of program

extern keyword tells compiler that given variable is declared somewhere else
using extern will not allocate space to compiler


3- static variable      [ONLY ONE TIME INITILIZATION] means if you intilize it twice then it will not get intitilzed it preserves it previous value

scope-          local to the block of the variable they are defined in.
defulat vlaue-  0
lifetime-       they are available throughout the program.


4- register variable
scope -         local to the function that are defined in.
default value-  garbage value
lifetime-       available till the end of function block.

register variable are stored in the CPU regiser instead of memory for faster access.
for variable which are going to use frequently.

*/
#include<stdio.h>
#include "expr.c"
void func()
{
    static int pt=4;
    printf("%d\n",pt);
    pt++;
}
void main()
{
    auto int g=4; //same as int a=4;
    printf("%d\n",g);

    func();
    func();

    extern int a;
    printf("%d\n",a);
    
    typedef int integer;
    register integer rt=34;
    printf("Valor of register variable is = %d\n",rt);

}
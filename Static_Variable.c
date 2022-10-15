/*
Static variable are variables which preserve their value even out of the scope
They preserve their value from previous scope and not reinitilize again
static variable remians in the memory thourgh out the span of program so the address remain same.
static variables are initilized to 0 automatically
can be initilized using constant literals
:- Even if they are declared and in a function and the function finishes it execution they still remain in the memory.
NOTE: static variable scope is limited to the function only but they preserve their previous value
*/
#include <stdio.h>
void func(int a)
{
    a=45;
    printf("Inside func\nThe value of a = %d\nThe address of a =%p\n",a,&a);
    static int b;
    printf("The value of b = %d\nThe address of b =%p\n",b,&b);
    b++;
}
void main()
{
    int a=12;
    printf("Inside Main\nThe value of a = %d\nThe address of a =%p\n",a,&a);
    func(a);
    func(a);

}
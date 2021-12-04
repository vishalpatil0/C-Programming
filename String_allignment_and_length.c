#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[]="hello how are you";
    printf("Length of string (%s) is = %lu\n",str,strlen(str));
    printf("%20.7s --> X\n",str); //20 means 20 space for the string before it. and .7 means only first  7 character of string will be printed.
    printf("%-20.7s --> X\n",str); //the allignment is left thats why the output printed on left even after having shift space of 20 as given

    /*
    Output:->
    Length of string (hello how are you) is = 17
             hello h --> X
    hello h              --> X
    */
    return 0;
}

/*
Compiler converts textual form of C program into executable.
Pre-processing:-
                    removal of comments
                    expansion of macros
                    including code of header files

compilation:-       assembly level instrction are generated 

Assembly:-          .o
                    .exe
                    assembly files are get covnerted into machine code.

Linking:-           Link the function implementation.

C Pre Processor is not a part of C Compiler
It is a text substitution tool. - remove comments and like that
All pre processor commands with (#)

e.g     #define : define a macro
                        macros are like function but they are faster and expanded in place
                        e.g
                        #define square(x) x*x

                        -define preprocessor variable.
                        -globally replaced a word with number
                        -can be used for debugging
                        -e.g

                        #define DEBUG
                        #ifdef DEBUG
                                statements
                        #endif
                        #undef DEBUG

        #include: include content of header file or c file in current file
                        header files promised that they will provide a function.
                        
                        <> angle bracket say to look into the standard system directories.
                        e.g #include<stdio.h>

                        "" the quotation marks say to look into the current directory.
                        #include "myfile.h"

                        disk drive full path of file are approved.

        #undef  : undefine a macro 

                        They are some pre define macros too.
                        1) __DATE__ in MMMDDYYYY format.
                        2) __TIME__ contain time in HH:MM:SS format.
                        3) __FILE__ contain file name as string literal.
                        4) __LINE__ current line number as decimal constant.
                        5) __STDC__ Defined as 1(ONE) when compiler compiles the ANSI standard.

        #ifdef  : check if macro is define 
        #ifndef : check if macro is not define
        #if     : compile time condition is true or not
        #else   : 
        #elif   :
*/
#include<stdio.h>
#include<stdlib.h>

#include"expr.c"

#define PI 3.14
#define SQUARE(r) r*r
void main()
{
//     printf("Value of 'a' which is defined in expr.c is %d\n",a);

//     int radius;
//     printf("Enter the radius of circle = ");
//     scanf("%d",&radius);

//     printf("The area of cricle is %f\n",PI*SQUARE(radius));

//     //predefined macros

//     printf("The FILENAME is %s\n",__FILE__);
//     printf("Today's date is %s\n",__DATE__);
//     printf("Current Time is %s\n",__TIME__);
//     printf("Line NUmber is %d\n",__LINE__);
//     printf("ANSI :  %d\n",__STDC__); //check if program is according to ANSI standard.

        #define vishal 34
        #undef vishal
        #ifdef vishal
                printf("Yes it is define");
        #else
                printf("It is not defined.");
        #endif

}
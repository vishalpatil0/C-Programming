#include<stdio.h>

/* const varibale value cannot be changed during program.

    two ways to define const varibale

    1) #define preprocessor
    2) const keyword*/
const int a=10;
void main()
{    
    // a=23;  cannot assigne new value to 'a' 
    int a = 34; // this is valid becuase you reintilizing it in a different scope
}
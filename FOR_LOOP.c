#include<stdio.h>

//for loop
// every  expression is optinal
// every expression can have more than one statement
// in conditial expressin all the statement before last satement are treated as just a STATEMENT and code will execute only when last statement is false
// in c everything except 0 is true

void main()
{
    for(int i=0,j=0;i-=5,i+=5,j<16;i++,j++,i--,i++)
    {
        printf("%d %d\n",i,j);
    }    
}
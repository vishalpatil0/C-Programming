#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(printf("Expression1\t");printf("Expression2\t");printf("Expression3\t"))
    {
        printf("\nIn the code\n");
    }
    return 0;
    /*Expression1     Expression2
    In the code
    Expression3     Expression2
    In the code
    Expression3     Expression2*/
}

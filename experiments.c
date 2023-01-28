#include<stdio.h>
#include "expr.c"
#define name "name"
#define Power(x,y){\
                for(int i = 0;i<y;i++){\
                    x*=x;}\
                    }\
                    x
int main(int argc, char const *argv[])
{
    /* code */
    printf("%s\n",name);
    printf("%d\n",Power(2,3));
    return 0;
}


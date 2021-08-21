#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("The number of arugments are = %d\n",argc);    
    for (int i = 0; i < argc; i++)
    {
        printf("The value at index number %d is = %s\n",i,argv[i]);
    }
    
    return 0;
}
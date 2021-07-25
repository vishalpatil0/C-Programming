#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[]="hello how are you";
    printf("Length of string (%s) is = %lu\n",str,strlen(str));
    printf("%20.7s\n",str);
    printf("%-20.7s\n",str); //the allignment is left thats why the output printed on left even after having shift space of 20 as given
    return 0;
}

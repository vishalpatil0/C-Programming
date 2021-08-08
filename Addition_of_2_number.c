#include<stdio.h>
//& returns the address of variable so during scanf we store the value at the address of the variable


int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter the first number here = ");
    scanf("%d",&a);
    printf("Enter the second number here = ");
    scanf("%d",&b);
    printf("Addtion of two numbers is = %d\n",a+b);
    return 0;
}

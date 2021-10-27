#include<stdio.h>
void main()
{
    printf("Enter the number = ");
    int n;
    static int rev;
    scanf("%d",&n);
    int g=n;
    while(n!=0)
    {
        int temp=n%10;
        rev=rev*10+temp;
        n/=10;
    }
    printf("Reverse of %d is %d",g,rev);
}
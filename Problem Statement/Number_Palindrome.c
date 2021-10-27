#include<stdio.h>
int palindrome(int);
void main()
{
    printf("Enter the number = ");
    int num;
    scanf("%d",&num);
    if(num == palindrome(num))
        printf("%d is palindrome.\n",num);
    else
        printf("%d is not palindrome.\n",num);
}
int palindrome(int data)
{
    static int rev;
    while(data!=0)
    {
        int temp=data%10;
        rev=rev*10+temp;
        data/=10;
    }
    return rev;
}
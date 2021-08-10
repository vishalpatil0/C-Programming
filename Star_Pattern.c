#include<stdio.h>
void main()
{
    short input;
    printf("Enter the number of lines that you want in pattern = ");
    scanf("%hi",&input);

    for (short i = 0; i <= input; i++)
    {
        for (short j = 0; j <= i; j++)
        {
            printf("%c",'*');
        }
        printf("\n");
    }

    for (short i = input; i >0; i--)
    {
        for (short j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
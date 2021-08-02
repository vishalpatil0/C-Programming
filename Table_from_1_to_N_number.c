#include<stdio.h>

int main()
{
    int LastNumber,i,j;
    printf("Enter the last number : ");
    scanf("%d",&LastNumber);
    for(i=1;i<=LastNumber;i++)
    {
        printf("\nTable of %d\n",i);
        for(int j=1;j<=10;j++)
        {
            printf("%d x %d = %d\n",i,j,j*i);
        }
    }
    return 0;
}
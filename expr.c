#include<stdio.h>
int a=334;

int main(int argc, char const *argv[])
{
    for(int i=1;i<=n;i++)
    {
        for (int j = 0; j <= n-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i ; k++)
        {
            printf("#");    
        }
        printf("\n");
    }
    return 0;
}

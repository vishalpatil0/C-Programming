#include<stdio.h>
#include<stdlib.h>
int * re()
{
    static int arr[]={1,2,3,4,5};
    return arr;
}
int main()
{
   int *n=re();
   printf("%d",n[2]);
   return 0;
}
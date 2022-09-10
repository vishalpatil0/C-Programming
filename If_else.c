#include<stdio.h>
int main(int argc, char const *argv[])
{
   int num1;
   //now we will check for the odd even number
   printf("Enter the value -> ");
   scanf("%d",&num1);
   if(num1 % 2 == 0){
      printf("%d is even number.\n",num1);
   }else{
      printf("%d is odd number.\n",num1);
   }
   return 0;
}

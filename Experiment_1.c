#include<stdio.h>
#include<stdlib.h>

float fun(float a,float b)
{
   float t=0;
   while(b!=0)
   {
     t=t+a;
     b=b-1;
   }
   return t;
}
void main()
{
   float a,b;
   printf("Enter the value of n= ");
   scanf("%f%f",&a,&b);
   printf("%.10f\n",fun(a,b));
}

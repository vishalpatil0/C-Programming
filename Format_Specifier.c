#include<stdio.h>
void main() {
   
   char ch = 'B';
   printf("%c\n", ch); //printing character data
   //print decimal or integer data with d and i
   int x = 45, y = 90;
   printf("%d\n", x);
   printf("%i\n", y);
   float f = 12.67f;
   printf("%f\n", f); //print float value
   printf("%e\n", f); //print in scientific notation
   int a = 67;
   printf("%o\n", a); //print in octal format
   printf("%x\n", a); //print in hex format
   char str[] = "Hello World";
   printf("%s\n", str);
   printf("%20s\n", str); //shift to the right 20 characters including the string
   printf("%-20s\n", str); //left align
   printf("%20.5s\n", str); //shift to the right 20 characters including the string, and print string up to 5 character
   printf("%-20.5s after space of 20 character\n", str); //left align and print string up to 5 character

   //Float Nubmer

   float g=7.8977648378374;
   printf("%-7.90f -->\n",g);    // 7 is the total number of character it will print and number after point is the accuracy of number digit

    int k=12;
    printf("%p\n",&k); //%p is used to print the address of the variable
}
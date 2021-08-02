/*Special symbols that are used to perform actions or operations are known as operators.*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    //Arithemetic Operators
    int a=10,b=5;
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d  modulous %d = %d\n",a,b,a%b);

    //Logical Operators

    // In c language any integer value except 0 is true and 0 if considered as false.
    printf("%d\n",10==10);  //comparision 
    printf("%d\n",10!=10);  // logical not
    printf("%d\n",10==10 && 11!=11); // logical and
    printf("%d\n",10==10 || 11!=11); // logical or

    //Bitwise Operator

    // bit wise opeartor works bit by bit.
    //xor opertor return 0 if both input are same otherwise it is one for dfferent inputs.
    a=2;
    b=3;
    printf("%d\n",a&b); // binary of 2 is 10 and 3 is 11 so there binary AND is 10 which is 2 

    // one's compliment operator
    int var = 3;
 
    printf("value = %d \n",~var); // which is equal to -4
    return 0;
}

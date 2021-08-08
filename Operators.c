/*Special symbols that are used to perform actions or operations are known as operators.*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    //Address of operator & returns the address
    //Dereference operator * is used to get the value of the operator
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


    //binary left shift opearator
    
    /*Takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift. Or in other words left shifting an integer “x” with an integer “y” denoted as ‘(x<<y)’ is equivalent to multiplying x with 2^y (2 raised to power y). 
eg: lets take N=22; which is 00010110 in Binary Form.
Now, if “N is left-shifted by 2” i.e N=N<<2 then N will become N=N*(2^2). Thus, N=22*(2^2)=88 which can be wriiten as 01011000.*/

    // a = 5(00000101), b = 9(00001001)
    unsigned char g = 5, h = 9;
 
    // The result is 00001010
    printf("g<<1 = %d\n", g<<1);
   
    // The result is 00010010
    printf("h<<1 = %d\n", h<<1); 

    int p=255;
    printf("p<<1 = %d\n",p<<1);   // in binary left shift it add zero at the end if you have shifted it by 2 then it will add 2 zero at the end and it treat decial number in the byte form means 8 bit form if there is 1 at the starting like "11000000" then 1 left shift will became "00000001 10000000"


    //Right Shift Opeartor
    /*Right Shift :

    Denoted as : >>

    Eg: N>>i (N: first operand, i: second operand)

    Takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift. In other words right shifting an integer “x” with an integer “y” denoted as ‘(x>>y)‘ is equivalent to dividing x with 2^y. 

    eg: lets take N=32; which is 100000 in Binary Form.

     Now, if “N is right-shifted by 2” i.e N=N>>2 then N will become N=N/(2^2). Thus, N=32/(2^2)=8 which can be wriiten as 1000.*/

    int j=128;

    printf("j>>1 = %d\n",j>>8); // if input is 00000001 then 1 right shift will make it 00000000

    //Assignment Operator
    int number_1=10;
    number_1+=2;
    printf("%hi\n",number_1);
    number_1-=2;
    printf("%hi\n",number_1);
    number_1*=2;
    printf("%hi\n",number_1);
    number_1/=2;
    printf("%hi\n",number_1);

    //Miscellaneous Operator
    //1) sizeof() operator : returns the size of varibale based on datatypes.

    printf("%hi\n",sizeof(short));
    printf("%c\n",sizeof(char));
    printf("%d\n",sizeof(number_1));
    
    signed short number_2=32768;
    printf("%hi\n",number_2);

    //2) address opeartor &

    printf("%d\n",&number_1);

    //3) conditinal Operator
    //  condition? expression2: expression3;
    //  variable=condition? expression2: expression3;
    
    signed long gh;
    gh=12;
    (gh==12) ? (printf("it is 12 ")) : (printf("it is not 12"));

    int gk;
    gk=(gh==12)?(100):(200);
    printf("%d",gk);
    return 0;
}

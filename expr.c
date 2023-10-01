#include<stdio.h>
#include<stdlib.h>

//This is macro pre processor
//global const
const int a = 99;

void printArray(int [],int);

const char* printString(char *str) {
    puts(str);
    return "Kurha";
}

void callbackDemo(const char* (*fptr) (char *)) {
    (*fptr)("ddd");
}

int main(int argc, char const *argv[])
{   
    int classA[] = {1,2,3,4,5};

    int length = sizeof(classA)/sizeof(classA[0]);

    //dynamic memory allocation
    int num;
    printf("Enter number to reverse it -->");
    scanf("%d",&num);
    int result = 0;
    while(num != 0) {
        result = result * 10;
        result += num % 10;
        num /= 10;
    }
    printf("result -> %d\n",result);
    return 0;
}

void printArray(int arr[], int length) {
    for (int i = 0; i < length; i++)
    {
        printf("%d\n",arr[i]);
    }
}



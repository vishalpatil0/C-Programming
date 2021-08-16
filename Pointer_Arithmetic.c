//by increment pointer with 1 it will add the size of data type it is created and point to the next index
// we cannot increment array name bcoz it is constant

//when we create the pointer of array we can use it as array  e.g int *ptra=arr;   so we can use it as ptra[2] to get the values
// array are constant pointer which always holds the value of 0th index.


#include<stdio.h>

void main()
{   
    int array[]={1,2,4,5,6};

    int *ptra=array;

    printf("%p\n",ptra);    
    printf("%p\n",array);    
    printf("%p\n",&array);  //&array == array  bcoz both points to the base address of the array  
    printf("%d\n",*ptra);    
    printf("%d\n",array[0]);    
    printf("%d\n",array[1]);    
    printf("%d\n",*(++ptra));    
    printf("%p\n",ptra);    
    printf("%p\n",&array[1]);

    printf("%d\n",array[2]);    
    printf("%d\n",*(array+2));    // array[i] is same as  *(array+2)
    printf("%d\n",*(array));        //it will print index 0 element
    printf("%p\n",array);

}
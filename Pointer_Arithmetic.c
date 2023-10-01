//by increment pointer with 1 it will add the size of data type it is created and point to the next index
// we cannot increment array name bcoz it is constant

//when we create the pointer of array we can use it as array  e.g int *ptra=arr;   so we can use it as ptra[2] to get the values
// array are constant pointer which always holds the value of 0th index.


#include<stdio.h>

int main()
{   
    int array[]={1,2,4,5,6};

    int *ptra=array;

    printf("ptra ->       %p\n",ptra);    
    printf("array ->      %p\n",array);    
    printf("&array ->     %p\n",&array);  //&array == array  bcoz both points to the base address of t he array  
    printf("*ptra ->      %d\n",*ptra);    
    printf("array[0] ->   %d\n",array[0]);    
    printf("array[1] ->   %d\n",array[1]);    
    printf("*(++ptra) ->  %d\n",*(++ptra));    
    printf("ptra ->       %p\n",ptra);    
    printf("&array[1] ->  %p\n",&array[1]);
    printf("array[2] ->   %d\n",array[2]);    
    printf("*(array+2) -> %d\n",*(array+2));    // array[i] is same as  *(array+2)
    printf("*(array)->    %d\n",*(array));        //it will print index 0 element
    printf("array ->      %p\n",array);

    return 0;
}
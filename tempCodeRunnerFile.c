#include<stdio.h>

void main()
{   
    int array[]={1,2,4,5,6};

    int *ptra=array;

    printf("%p\n",ptra);    
    printf("%p\n",&(array));    
    printf("%d\n",*ptra);    
    printf("%d\n",array[0]);    
    printf("%d\n",array[1]);    
    printf("%d\n",*(++ptra));    
    printf("%p\n",ptra);    
    printf("%p\n",&array[1]);

    printf("%d\n",array[2]);    
    printf("%d\n",*(array+2));    // array[i] is same as  *(array+2)
    printf("%d\n",*(array));        //it will print index 0 element

    printf("%d\n",*(array+sizeof(int)));
}
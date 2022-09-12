/*
Runtime memory allocation and deallocation

static memory allocation is done before the program there is not reusability and allocated memory cannot be freed and it is less efficient

memory assigned to program in c

1- code --text segment
2- static/global variable -- a) data segment(intilized segment e.g. int i=4;) b) bss segment e.g int i;
3- stack --grows when prgram go further 
4- heap --grows when we dynamically memory allocation
function get executed in stack

use size command like size ./a.out


malloc [memory allocation]:-    reserves block of memory with given amount of bytes.
                                return a void pointer to the allocated space in heap
                                then the returned pointer need to be type casted before use 
                                if the space is insufficient then the memory allocation fails and returns null pointer.
                                all the value allocated to memory are initilized garbage value.

                                syntax :- pointer=(pointer-type *) malloc(size_in_bytes)
                                e.g    :- int *ptr;
                                          ptr = (int*) malloc (3*sizeof(int));

calloc [contigous allocation]:- reserves N block of memory with given amount of bytes.

                                syntax:-    ptr=(ptr_type *) calloc (N,size_in_bytes);  N: how many blocks

realloc [reallocation]:-    if dynamically allocated memory is insufficient then size get change using realloc() function.
                            syntax:-    ptr=(ptr-type*) realloc (ptr,new_Size_in_bytes);

free:-  free(ptr) it frees the memory    

You can also perform pointer arithmetic on dynamic array.

Except for {element,element} this type of intilization is not possible.
*/


#include<stdio.h>
#include<stdlib.h>
void main()
{
    //malloc
    int *ptr;
    ptr=(int *) malloc (sizeof(int));
    *ptr=34;
    printf("%d\n",*ptr); 
    printf("Enter the size of array that you want to create = ");
    int size;
    scanf("%d",&size);
    int *ptar=(int *) malloc (size*sizeof(int));
    printf("Enter the value in array\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %dth value\n",i+1);
        scanf("%d",&ptar[i]);
    }
    printf("Values in array\n");
    for (int i = 0; i < size; i++)
    {
        printf(" %d\n",ptar[i]);
    }

    //calloc
    // printf("Enter the size of array that you want to create = ");
    // scanf("%d",&size);
    // int *ptra=(int *) calloc (size,sizeof(int));
    // printf("Enter the value in array\n");
    // for (int i = 0; i < size; i++)
    // {
    //     printf("Enter the %dth value\n",i+1);
    //     scanf("%d",&ptra[i]);
    // }
    // printf("Values in array\n");
    // for (int i = 0; i < size; i++)
    // {
    //     printf(" %d\n",ptra[i]);
    // }

    //realloc
    printf("Enter the size of new array that you want to create = ");
    scanf("%d",&size);
    ptar=(int *) realloc (ptar,size*sizeof(int));
    printf("Enter the value in array\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %dth value\n",i+1);
        scanf("%d",&ptar[i]);
    }
    printf("Values in array\n");
    for (int i = 0; i < size; i++)
    {
        printf(" %d\n",ptar[i]);
    }

    //free
    free(ptar); //deallocation of memory

}

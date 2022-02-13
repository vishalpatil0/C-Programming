/*
Dynamic Memory Allocation is done on heap memory

int **arr=(int**)calloc(n,sizeof(int*));
this allocate the n block of pointer memory 


arr[i]=(int*)calloc(n,sizeof(int));
this allocate n size integer array to every pointer in int **arr array.


*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("Enter the value of row and column --> ");
    scanf("%d",&n);
    int **arr=(int**)calloc(n,sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        arr[i]=(int*)calloc(n,sizeof(int));
    }
    //creation done


    //entering element 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    //printing element

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    

    //deleting memory
    for (int i = 0; i < n; i++)
    {
        free(arr[i]);
    }
    free(arr);
    
}
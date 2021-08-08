#include<stdio.h>

void main()
{
    printf("Enter the rows and columns for matrix = ");
    short rows,cols;
    scanf("%hi%hi",&rows,&cols);

    int Matrix[rows][cols];

    
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            printf("Enter the (%hi,%hi) element in matrix = ",i,j);
            scanf("%d",&Matrix[i][j]);
            
        }
        
    }

    printf("Elements in the array are = \n");

    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            printf("%d\t",Matrix[i][j]);
            
        }
        printf("\n");
    }
        
 }
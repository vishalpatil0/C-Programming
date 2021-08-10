#include<stdio.h>
#define ArrayMaxLimit 100
int i,j,N;
void insert(int *);
void delete(int *);
void main()
{
    printf("Enter the size of array = ");
    int arr[ArrayMaxLimit],choice;
    scanf("%d",&N);
    printf("\nEnter the Elements in Array\n\n");
    for ( i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe Array is as follow\n\n");
    for (i = 0; i < N; i++)
    {
        printf("%d\n",arr[i]);
    }
    start:
    printf("\n\nEnter your choice\n1-Insert New Element\n2- Delete Element\n");
    scanf("%d",&choice);
    if(choice==1)
    {   
        insert(arr);
        printf("\n\nThe new array is \n\n");
        for ( i = 0; i < N; i++)
        {
            printf("%d\n",arr[i]);
        }
    }
    else if(choice==2)
    {
        delete(arr);
        printf("\n\nThe new array is \n\n");
        for ( i = 0; i < N; i++)
        {
            printf("%d\n",arr[i]);
        }
    }
    else
    {
        printf("\n\nPlease enter right option\n");
        goto start;
    }
}

void insert(int *ptra)
{
    int element,position;
    printf("Enter the element that you want to enter with its position =");
    scanf("%d%d",&element,&position);
    position--;
    for ( i = N; i >= position; i--)
    {
        ptra[i+1]=ptra[i];
    }
    ptra[position]=element;
    N++;
}

void delete(int *ptra)
{
    int element,position=432;
    printf("Enter the element that you want to delte = ");
    scanf("%d",&element);
    for ( i = 0; i < N; i++)
    {
        if(element==ptra[i])
            position=i;
    }
    if(position!=432)
    {
        for ( i = position; i < N; i++)
        {
            ptra[i]=ptra[i+1];
        }
        N--;
    }
    else
    {
        printf("Element is not present in the array.\n");
    }
}
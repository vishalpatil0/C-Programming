//Array Removal and Insetion

#include<stdio.h>

void main()
{
    int array[20]={23,53,13,666,34,764}; //given array
    int length=sizeof(array)/sizeof(array[0]);
    //give a element and delete it from array
    int count=6; //helps to monitor number of elements in the array
    int element,position;
    printf("Enter the element & its position that you want to insert int the array = ");
    scanf("%d%d",&element,&position);
    position--;

    if(count==length)
    {
        printf("No Space\n");
    }

    else
    {
        for (int i = count; i >= position; i--)
        {
            array[i+1]=array[i];
        }
        array[position]=element;
        count++;

        printf("New array is \n"); 
        for (int i = 0; i < count; i++)
        {
            printf("%d\n",array[i]);
        }   
    }
}
//Array Removal and Insetion

#include<stdio.h>

void main()
{
    int array[]={23,53,13,666,34,764}; //given array
    int length=sizeof(array)/sizeof(array[0]);
    int position=0;
    //give a element and delete it from array

    int element;
    printf("Enter the element that you want to delete from the array = ");
    scanf("%d",&element);

    for (int i = 0; i < length; i++)
    {
        if (element==array[i])
        {
            position=i;
            goto delete;
        }
    }
    
    delete:
        for (int i = position; i < length-1; i++)
        {
            array[i]=array[i+1];

        }
        array[length-1]=
        printf("New array is as following : \n");

        for (int i = 0; i < length; i++)
        {
            printf("%d\n",array[i]);
        }
        
        
    if(position==0)
        printf("Entered element is not in the array please try again later\n");
}
//if you change the value of array in function in which you have passed it as an arguments then it will also  change in main array bcoz array is a constant pointer

#include<stdio.h>
void reverse(int [],int);
void main()
{
    int arr[]={1,2,3,4,5};
    printf("\nArray after reversal is as follows \n");
    reverse(arr,sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void reverse(int ptra[],int N)
{
    int temp;
    int i=0,j=N-1;
    while(i<=j)
    {
        temp=ptra[i];
        ptra[i]=ptra[j];
        ptra[j]=temp;
        i++;
        j--;
    }
}
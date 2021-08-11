#include<stdio.h>
// In C, array parameters are treated as pointers
// so length should be passed separately
//In c string is the array of character so when you returns it it return the pointer to first index
// so to return it you have to change the return type from char to char *

void reverse(int *,int);
void main()
{
    int arr[]={1,2,3,4};
    int length=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,length);
}
void reverse(int *ptra,int length)
{
    int revs[length];
    for(int i=length-1,j=0;i>=0;i--,j++)
    {
        revs[j]=ptra[i];
    }
    for(int i=0;i<length;i++)
    {
        ptra[i]=revs[i];
    }
}
#include<stdio.h>
void func(int array[])
{
    array[3]=44; //value changed in array parameter also reflect in arugemt array which is passed
}
void func2(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",*(ptr+i)); // or we can also use ptr[i]
    }
    
}
void main()
{
    int arr[]={34,32,566,123,9767};
    func(arr);
    printf("Value at 3rd index after calling function = %d\n",arr[3]);
    func2(arr);
}
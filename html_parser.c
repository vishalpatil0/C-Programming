#include<stdio.h>
#include<string.h>
void parser(char arr[],int length)
{       
        int i=0;
        if(arr[i]=='<' && arr[i+1]=='h' && arr[i+2]=='1' && arr[i+3]=='>') 
        {
            arr[i]=arr[i+1]=arr[i+2]=arr[i+3]=' ';
        }
        if(arr[length-1]=='>' && arr[length-2]=='1' && arr[length-3]=='h' && arr[length-4]=='/' && arr[length-5]=='<')
        {
            arr[length-1]=arr[length-2]=arr[length-3]=arr[length-4]=arr[length-5]=' ';
        }
}
void main()
{
    char str1[]="<h1>This is a html string</h1>";
    int length=strlen(str1);
    puts(str1);
    parser(str1,length);
    puts(str1);
}
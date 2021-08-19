/*
Volatile memory is avaialble till the computer is on e.g RAM
Non-Volatile memory is availabe forever. e.g Hardisk

There are two types of files
text files -plain text
binary files - more security

File Opearations

1) Creating a File
2) Opening a File
3) Closing a File
4) Writing and Reading to a File

When working with file we have to declare pointer of type FILE.

stdio.h contains function fopen() for opening file and fclose for closing a file.
    e.g. ptr=fopen("filename","mode");

fscanf function is used to read a file.

syntax 
        fscanf(ptr,"%s",string)

for writing to a file we use fprintf function.

syntax 
        fprintf(ptr,"%s",string)
    mode 
    r = read mode
    w = write append
    a = append mode keep the previous mode
    r+ = reading + writing 
    rb = read binary mode
    wb = writing binary 

*/

#include<stdio.h>
void main()
{
    char string[100]="Hellow myself vishal patil";
    FILE *ptr=NULL;

    //Reading a filie
    // ptr=fopen("MyFile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of the file till it reaches whitespace are = \n%s\n",string);

    //Writing to a file.
    // ptr=fopen("MyFile.txt","w"); //write mdoe
    ptr=fopen("MyFile.txt","a");    //append mode
    fprintf(ptr,"%s",string);
    fclose(ptr);
}
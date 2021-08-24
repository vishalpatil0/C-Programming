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
    w+ = it creates a new file and if file is present then it delete the content of that file.
    a+ = reading + wiriting and create file if it does not exists. writing starts from end of the file.
    rb = read binary mode
    wb = writing binary 

    Functions

    1) fputc : helps to enter character in file.
        int fputc(character, ptr);

    2) fputs : helps to enter string in file
        int fputs(const char *s,FILE *ptr);

    3) fgetc : read character from file 
                returns the read character on success.

    4) fgets : read a null terminated string from file.
                int fgets(const char *s, int n, FILE *fp);  n is the number of character that you want to read.

    5) 


*/  

#include<stdio.h>
void main()
{
    char string[100]="Hellow myself vishal patil\n"; //having \n at the end of string tells the fprintf function to add a new line at the end after writing to a file
    FILE *ptr=NULL;

    //Reading a filie
    // ptr=fopen("MyFile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of the file till it reaches whitespace are = \n%s\n",string);
    // fscanf(ptr,"%s",string);
    // printf("The content of the file till it reaches whitespace are = \n%s\n",string);

    //pointer moves to next location after reading 


    //Writing to a file.
    // ptr=fopen("MyFile.txt","w"); //write mdoe
    // ptr=fopen("MyFile.txt","a");    //append mode
    // fprintf(ptr,"%s",string);
    // fclose(ptr);


    //Append mode 
    // ptr=fopen("MyFile.txt","a+");
    // fprintf(ptr,"%s","Namrata Badge?");
    // char data[100];
    // fscanf(ptr,"%s",data);
    // printf("%s",data);
    // fclose(ptr);


    ptr=fopen("MyFile.txt","a+");

    //fgetc
    char c=fgetc(ptr);
    printf("The character i just red is = %c\n",c);
    printf("The next character i just red is = %c\n",fgetc(ptr));

    //fgets

    char temp[100];
    fgets(temp,4,ptr);
    printf("The string is %s\n",temp);

    //fputc

    fputc('Z',ptr);
    
    //fputs
    
    fputs("What is the cost of lies?",ptr);

    fclose(ptr);
}
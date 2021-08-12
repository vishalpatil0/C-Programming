#include<stdio.h>
#include<string.h>
void main()
{
    char FName[100]="Vishal";
    char LName[100]="patil";
    char FULLNAME[100];

    //strcat to concatenate two strings
    // puts(strcat(FName,LName)); 
    
    //strlen for length of string in unsigned format
    printf("The length of FName is = %ld\n",strlen(FName));

    //strrev revers the string 
    // puts(strrev(FName));

    strcpy(FULLNAME,strcat(FName,LName));
    puts(FULLNAME);

    strcpy(FName,"patil");

    printf("%d\n",strcmp(FName,LName));  //prints 0 if strings are equal
}
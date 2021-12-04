//Null character "\0" at the end of string is used to delcare that the string ends here
//if you use doublt qoute then there is "\0" at the end automatically
//but in the single qoute in curley braces you have to mentioned it at the end
//if you mentioned null character in the middle of the string then the data after the Null character will not get treated as a part of string
//strcmp returns 0 if there are same
#include<stdio.h>
#include<string.h>

void printstr(char arr[])
{
    for (int i = 0; arr[i]!='\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}
void main()
{
    // ways to delcare and intilize stirng
    // char name[]="vishal patil";
    char name[]={'v','i','s','h','a','l',' ','p','a','t','i','l','\0'};
    
    //string printing methods
    printf("%s\n",name); //using printf functin with %s format specifiers
    printstr(name); //using function
    puts(name);     //using puts function from string.h library

    //taking string input
    printf("\nEnter the string = ");
    //gets(name); //old method 
    fgets(name,strlen(name),stdin); //it checks the newline character with maximum string length
    // scanf("%s",&name); not a good way to take string
    puts(name); 
}
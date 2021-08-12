/* if you are using gets() after scanf then use getchar after scanf bcoz scanf leaves the newline character and gets thinks it his input OR scanf("%d\n",&a)
*/


#include<stdio.h>
#include<string.h>
#define namesize 100
typedef struct employee
{
    int id;
    char name[namesize];
}emp;

void main()
{
    emp e1[3];
    for (int i = 0; i < sizeof(e1)/sizeof(e1[0]); i++)
    {
        printf("Enter the details of %d employee\n",i+1);
        printf("Enter the id number = ");
        scanf("%d",&e1[i].id);
        getchar();
        printf("Enter the name = ");
        fgets(e1[i].name,namesize,stdin);
    }   
    printf("The entered details are as follows \n");
    for (int i = 0; i < sizeof(e1)/sizeof(e1[0]); i++)
    {
        printf("Id of %d employee = %d\n",i,e1[i].id);
        printf("Name of %d employee = %s\n",i,e1[i].name);
    }
}
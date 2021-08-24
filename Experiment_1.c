#include<stdio.h>
#include<stdlib.h>

void main()
{
   char *str;
   int size;
   printf("Enter the number of characters that = ");
   scanf("%d",&size);

   str=(char *) malloc((size+1)*sizeof(char));
   printf("Enter the name of employee = ");
   scanf("%s",str);
   printf("\nName of the employee is %s\n",str);
   for (int i = 0; i < 2; i++)
   {
      printf("Enter the number of characters that = ");
      scanf("%d",&size);
      str=(char *) realloc(str,(size+1)*sizeof(char));
      printf("Enter the name of employee = ");
      scanf("%s",str);
      printf("\nName of the employee is %s\n",str);
   }
   free(str);
}

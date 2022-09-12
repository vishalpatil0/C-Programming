#include <stdio.h>
#include <stdlib.h>
int main()
{
   int **arr = (int**) calloc(2,sizeof(int*));

   for (int i = 0; i < 2; i++)
   {
      arr[i] = (int*) calloc(3,sizeof(int));
   }
   for (int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         arr[i][j] = i+j+11;
      }
   }
   for (int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         printf("%d\n",arr[i][j]);
      }
   }
   for (int i = 0; i < 2; i++)
   {
      free(arr[i]);
   }
   free(arr);
   return 0;
}
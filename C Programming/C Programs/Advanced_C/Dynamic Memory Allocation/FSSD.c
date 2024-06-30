#include <stdio.h>
#include <stdlib.h>
void print(int r, int c, int *a[r])
{
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < c; j++)
      {

         printf("%d ", a[i][j]);
      }
      printf("\n");
   }
}
void read(int r, int c, int *a[r])
{

   for (int i = 0; i < r; i++)
   {
      a[i] = malloc(c * sizeof(int));
   }
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < c; j++)
      {
         printf("Arr[%d][%d]:", i, j);
         scanf("%d", &a[i][j]);
      }
   }
}

int main()
{
   int r = 3;
   int *a[r];
   int c;
   printf("Enter Your column Value:");
   scanf("%d", &c);
  // a = malloc(c * sizeof(int));
   read(r, c, a);
   print(r, c, a);
}
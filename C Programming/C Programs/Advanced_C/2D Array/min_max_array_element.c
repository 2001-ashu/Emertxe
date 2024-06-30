#include <stdio.h>
int main()
{
     int s1 = 3, s2 = 3;
     // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
     int arr[3][3];
     printf("Enter Array elements:\n");
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               printf("arr[%d][%d]:", i, j);
               scanf("%d", &arr[i][j]);
          }
     }
     int min = arr[0][0];
     int max = arr[0][0];
     printf("Array Elements are:\n");
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               
             

               printf("%d ", arr[i][j]);
          }
          printf("\n");
     }

     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
                if (arr[i][j] > max)
               {
                     max=arr[i][j];
               }
               else
               {
                    if (arr[i][j] < min)
                    {
                         min=arr[i][j];;
                    }
               }
          }
     }
     printf("Minimum element in array:%d\n", min);
     printf("Maximum element in array:%d", max);
}

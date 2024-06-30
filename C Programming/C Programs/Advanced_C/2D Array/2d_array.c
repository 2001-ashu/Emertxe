#include<stdio.h>

int main()
{
    int r=3,c=3;
    
   int arr[r][c];
   printf("Enter 2D Array Elements :\n");
  
      for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}


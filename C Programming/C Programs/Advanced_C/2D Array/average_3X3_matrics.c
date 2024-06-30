#include<stdio.h>
int main()
{
    int r=3,c=3;
     int arr[r][c];
     float sum=0,avg;
    
     printf("Enter Array Elements:\n");
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            printf("arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
           
            
        }
        printf("\n");
     }
     for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++)
        {
             sum=sum+arr[i][j];
            printf("%d ",arr[i][j]);
        }
                printf("\n");

     }
      avg=sum/(r*c);
    printf("Sum of 2D array Elements :%g \n",sum);

     printf("Average of 2D array Elemets are:%g ",avg);
     
}
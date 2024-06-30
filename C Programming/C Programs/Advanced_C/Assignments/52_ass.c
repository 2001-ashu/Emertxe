/*
Name:Ashutosh Zende
Date:14/02/2024
Title:WAP to implement fragments using Array of Pointers
 */
#include<stdio.h>
#include<stdlib.h>

int fragments(int, int *arr[]);

int sw[10];

int main()
{
        int j,i,row;
        float sum;

        printf("Enter no.of rows : ");                                          //Read row value
        scanf("%d",&row);

        int *arr[row];

        for(i = 0;i < row;i++)
        {
                printf("Enter no of columns in row[%d] :",i);                   //Reading columns 
                scanf("%d",&sw[i]);

                arr[i] = (int*)malloc((sw[i]+1) * sizeof(int));                 //Dynamically memory allocation
        }

        printf("\n");

        for(i = 0;i < row;i++)
        {
                printf("Enter %d values for row[%d] :",sw[i],i);
                sum = 0;
                for(j = 0;j < sw[i];j++)
                {
                        scanf("%f",((float*)(*(arr+i)+j)));
                        sum = sum + ((float)(*(arr+i)+j));                    //Adding
                }
                ((float)(*(arr+i)+j)) = (sum / sw[i]);                        //storing avg      
        }

    fragments(row,arr);                                                         //Function callig

        for(i=0;i<row;i++)
                free(arr[i]);

    return 0;
}

int fragments(int row, int *arr[])
{
        int i,j;
        int tmp1,*tmp;
        float sum;

        printf("Before sorting output is:\n\n");

        for(i = 0;i < row;i++)
        {
                for(j = 0;j < sw[i]+1;j++)
                {
                        printf("%f ",((float)(*(arr+i)+j)));                  //before sorting array print
                }
                printf("\n\n");
        }

        for(i = 0;i < row-1;i++)
        {
                for(j = 0;j < row-i-1;j++)
                {
                        if((float)arr[j][sw[j]] > (float)arr[j+1][sw[j+1]])     //Chcking condition
                        {
                                tmp = arr[j];
                                arr[j] = arr[j+1];                              //Array swapping
                                arr[j+1]  = tmp;

                                tmp1 = sw[j];
                                sw[j] = sw[j+1];                                //Colomn values swapping
                                sw[j+1] = tmp1;
                        }
                }
        }

        printf("After sorting output is:\n\n");

        for(i = 0;i < row;i++)
        {
                for(j = 0;j < (sw[i]+1);j++)
                {
                        printf("%f ",((float)(*(arr+i)+j)));                  //After array swapping
                }
                printf("\n\n");
        }
}